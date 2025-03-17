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
        bool Fixed::operator<(const Fixed &other) const;
        bool Fixed::operator>(const Fixed &other) const;
        bool Fixed::operator>=(const Fixed &other) const;
        bool Fixed::operator<=(const Fixed &other) const;
        bool Fixed::operator==(const Fixed &other) const;
        bool Fixed::operator!=(const Fixed &other) const;
        Fixed Fixed::operator+(const Fixed &other) const;
        Fixed Fixed::operator-(const Fixed &other) const;
        Fixed Fixed::operator*(const Fixed &other) const;
        Fixed Fixed::operator/(const Fixed &other) const;
        const Fixed Fixed::operator++(int);
        const Fixed Fixed::operator--(int);
        Fixed Fixed::operator++(void);
        Fixed Fixed::operator--(void);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
