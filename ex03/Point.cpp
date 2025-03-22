#include "Point.hpp"

Point::Point(){}

Point::Point(const float x, const float y) 
    : x(Fixed(x)), y(Fixed(y)) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point& Point::operator=(const Point &points){
    (void)points;
    return *this;
}

Point::~Point(){}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}
