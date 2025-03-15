#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    int fp_value;
    static const int n_bits =  8;

    public :
        Fixed(); // constructor
        Fixed(const Fixed &copy); // copy constructor
        Fixed(const int integer); // int constructor
        Fixed(const float number); // float constructor
        ~Fixed(); //destructor
        
        Fixed   &operator=(const Fixed &copy); // copy assignment operator
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
