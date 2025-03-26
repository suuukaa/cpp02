#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    int fp_value;
    static const int n_bits =  8;

    public :
        Fixed();
        Fixed(const Fixed &copy);
        Fixed(const int integer);
        Fixed(const float number);
        ~Fixed(); 
        
        Fixed   &operator=(const Fixed &copy);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
