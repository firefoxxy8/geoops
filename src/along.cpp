#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::plugins(cpp11)]]

#include "json.h"
using json = nlohmann::json;

#include "geojson_helpers.h"
#include "distance.h"
#include "destination.h"
#include "bearing.h"

// [[Rcpp::export]]
std::string along(std::string x, double dist, std::string units) {
  json coords;
  auto line = json::parse(x);

  if (line["type"] == "Feature") coords = line["geometry"]["coordinates"];
  else if (line["type"] == "LineString") coords = line["coordinates"];
  else throw std::runtime_error("input must be a LineString, Feature, or Geometry");

  double travelled = 0;
  for (int i = 0; i < coords.size(); i++) {
    if (dist >= travelled && i == coords.size() - 1) break;
    else if (travelled >= dist) {
      double overshot = dist - travelled;
      if (!overshot) return point(coords[i].dump());
      else {
        double direction = bearing(coords[i].dump(), coords[i - 1].dump()) - 180;
        std::string interpolated = destination(coords[i].dump(), overshot,
                                               direction, units);
        return interpolated;
      };
    } else {
      travelled += distance(coords[i].dump(), coords[i + 1].dump(), units);
    };
  };
  return point(coords[coords.size() - 1].dump());
};
