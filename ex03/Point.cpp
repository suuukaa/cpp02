#include "Point.hpp"

Point::Point(){}

Point::Point(const float x, const float y) 
    : x(Fixed(x)), y(Fixed(y)) {}


Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point& Point::operator=(const Point &rhs){
    return *this;
}


Point::~Point(){}

