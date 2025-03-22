#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"


class Point{

    const Fixed x;
    const Fixed y;

    public :
        Point();
        Point(const float x, const float y);
        Point(const Point &other);
        Point &operator=(const Point &rhs);
        ~Point();
  
        Fixed getX() const;
        Fixed getY() const;
    
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif