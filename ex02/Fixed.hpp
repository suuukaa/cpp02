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
        float toFloat(void) const;
        int toInt(void) const;
        bool operator<(const Fixed &other) const;
        bool operator>(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;
        const Fixed operator++(int);
        const Fixed operator--(int);
        Fixed operator++(void);
        Fixed operator--(void);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
