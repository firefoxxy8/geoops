// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// along
std::string along(std::string x, double dist, std::string units);
RcppExport SEXP _geoops_along(SEXP xSEXP, SEXP distSEXP, SEXP unitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type dist(distSEXP);
    Rcpp::traits::input_parameter< std::string >::type units(unitsSEXP);
    rcpp_result_gen = Rcpp::wrap(along(x, dist, units));
    return rcpp_result_gen;
END_RCPP
}
// ringArea
double ringArea(std::string x);
RcppExport SEXP _geoops_ringArea(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(ringArea(x));
    return rcpp_result_gen;
END_RCPP
}
// geometry
double geometry(std::string x);
RcppExport SEXP _geoops_geometry(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(geometry(x));
    return rcpp_result_gen;
END_RCPP
}
// area
double area(std::string inp);
RcppExport SEXP _geoops_area(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type inp(inpSEXP);
    rcpp_result_gen = Rcpp::wrap(area(inp));
    return rcpp_result_gen;
END_RCPP
}
// bbox_polygon
std::string bbox_polygon(std::vector<double> bbox);
RcppExport SEXP _geoops_bbox_polygon(SEXP bboxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type bbox(bboxSEXP);
    rcpp_result_gen = Rcpp::wrap(bbox_polygon(bbox));
    return rcpp_result_gen;
END_RCPP
}
// bearing
double bearing(std::string start, std::string end);
RcppExport SEXP _geoops_bearing(SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::string >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(bearing(start, end));
    return rcpp_result_gen;
END_RCPP
}
// circle3
std::string circle3();
RcppExport SEXP _geoops_circle3() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(circle3());
    return rcpp_result_gen;
END_RCPP
}
// destination
std::string destination(std::string from, double distance, double bearing, std::string units);
RcppExport SEXP _geoops_destination(SEXP fromSEXP, SEXP distanceSEXP, SEXP bearingSEXP, SEXP unitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type from(fromSEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< double >::type bearing(bearingSEXP);
    Rcpp::traits::input_parameter< std::string >::type units(unitsSEXP);
    rcpp_result_gen = Rcpp::wrap(destination(from, distance, bearing, units));
    return rcpp_result_gen;
END_RCPP
}
// distance
double distance(std::string start, std::string end, std::string units);
RcppExport SEXP _geoops_distance(SEXP startSEXP, SEXP endSEXP, SEXP unitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::string >::type end(endSEXP);
    Rcpp::traits::input_parameter< std::string >::type units(unitsSEXP);
    rcpp_result_gen = Rcpp::wrap(distance(start, end, units));
    return rcpp_result_gen;
END_RCPP
}
// nearest
std::string nearest(std::string target_point, std::string points);
RcppExport SEXP _geoops_nearest(SEXP target_pointSEXP, SEXP pointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type target_point(target_pointSEXP);
    Rcpp::traits::input_parameter< std::string >::type points(pointsSEXP);
    rcpp_result_gen = Rcpp::wrap(nearest(target_point, points));
    return rcpp_result_gen;
END_RCPP
}
// point
std::string point(std::string coordinates, std::string properties);
RcppExport SEXP _geoops_point(SEXP coordinatesSEXP, SEXP propertiesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type coordinates(coordinatesSEXP);
    Rcpp::traits::input_parameter< std::string >::type properties(propertiesSEXP);
    rcpp_result_gen = Rcpp::wrap(point(coordinates, properties));
    return rcpp_result_gen;
END_RCPP
}
// get_coords
std::string get_coords(std::string x);
RcppExport SEXP _geoops_get_coords(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(get_coords(x));
    return rcpp_result_gen;
END_RCPP
}
// in_ring
bool in_ring(String pt, String ring);
RcppExport SEXP _geoops_in_ring(SEXP ptSEXP, SEXP ringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type pt(ptSEXP);
    Rcpp::traits::input_parameter< String >::type ring(ringSEXP);
    rcpp_result_gen = Rcpp::wrap(in_ring(pt, ring));
    return rcpp_result_gen;
END_RCPP
}
// inside_cpp
bool inside_cpp(String point, String polygon);
RcppExport SEXP _geoops_inside_cpp(SEXP pointSEXP, SEXP polygonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type point(pointSEXP);
    Rcpp::traits::input_parameter< String >::type polygon(polygonSEXP);
    rcpp_result_gen = Rcpp::wrap(inside_cpp(point, polygon));
    return rcpp_result_gen;
END_RCPP
}
// lineDistance
double lineDistance(std::string line, std::string units);
RcppExport SEXP _geoops_lineDistance(SEXP lineSEXP, SEXP unitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type line(lineSEXP);
    Rcpp::traits::input_parameter< std::string >::type units(unitsSEXP);
    rcpp_result_gen = Rcpp::wrap(lineDistance(line, units));
    return rcpp_result_gen;
END_RCPP
}
// midpoint
std::string midpoint(std::string from, std::string to);
RcppExport SEXP _geoops_midpoint(SEXP fromSEXP, SEXP toSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type from(fromSEXP);
    Rcpp::traits::input_parameter< std::string >::type to(toSEXP);
    rcpp_result_gen = Rcpp::wrap(midpoint(from, to));
    return rcpp_result_gen;
END_RCPP
}
// planepoint
double planepoint(std::string point, std::string triangle);
RcppExport SEXP _geoops_planepoint(SEXP pointSEXP, SEXP triangleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type point(pointSEXP);
    Rcpp::traits::input_parameter< std::string >::type triangle(triangleSEXP);
    rcpp_result_gen = Rcpp::wrap(planepoint(point, triangle));
    return rcpp_result_gen;
END_RCPP
}
// pointGrid
std::string pointGrid(std::vector<double> bbox, double cellSize, std::string units);
RcppExport SEXP _geoops_pointGrid(SEXP bboxSEXP, SEXP cellSizeSEXP, SEXP unitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< double >::type cellSize(cellSizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type units(unitsSEXP);
    rcpp_result_gen = Rcpp::wrap(pointGrid(bbox, cellSize, units));
    return rcpp_result_gen;
END_RCPP
}
// triangleGrid
std::string triangleGrid(std::vector<double> bbox, int cellSize, std::string units);
RcppExport SEXP _geoops_triangleGrid(SEXP bboxSEXP, SEXP cellSizeSEXP, SEXP unitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< int >::type cellSize(cellSizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type units(unitsSEXP);
    rcpp_result_gen = Rcpp::wrap(triangleGrid(bbox, cellSize, units));
    return rcpp_result_gen;
END_RCPP
}
// version_nlohmann_json
std::string version_nlohmann_json();
RcppExport SEXP _geoops_version_nlohmann_json() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(version_nlohmann_json());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_geoops_along", (DL_FUNC) &_geoops_along, 3},
    {"_geoops_ringArea", (DL_FUNC) &_geoops_ringArea, 1},
    {"_geoops_geometry", (DL_FUNC) &_geoops_geometry, 1},
    {"_geoops_area", (DL_FUNC) &_geoops_area, 1},
    {"_geoops_bbox_polygon", (DL_FUNC) &_geoops_bbox_polygon, 1},
    {"_geoops_bearing", (DL_FUNC) &_geoops_bearing, 2},
    {"_geoops_circle3", (DL_FUNC) &_geoops_circle3, 0},
    {"_geoops_destination", (DL_FUNC) &_geoops_destination, 4},
    {"_geoops_distance", (DL_FUNC) &_geoops_distance, 3},
    {"_geoops_nearest", (DL_FUNC) &_geoops_nearest, 2},
    {"_geoops_point", (DL_FUNC) &_geoops_point, 2},
    {"_geoops_get_coords", (DL_FUNC) &_geoops_get_coords, 1},
    {"_geoops_in_ring", (DL_FUNC) &_geoops_in_ring, 2},
    {"_geoops_inside_cpp", (DL_FUNC) &_geoops_inside_cpp, 2},
    {"_geoops_lineDistance", (DL_FUNC) &_geoops_lineDistance, 2},
    {"_geoops_midpoint", (DL_FUNC) &_geoops_midpoint, 2},
    {"_geoops_planepoint", (DL_FUNC) &_geoops_planepoint, 2},
    {"_geoops_pointGrid", (DL_FUNC) &_geoops_pointGrid, 3},
    {"_geoops_triangleGrid", (DL_FUNC) &_geoops_triangleGrid, 3},
    {"_geoops_version_nlohmann_json", (DL_FUNC) &_geoops_version_nlohmann_json, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_geoops(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
