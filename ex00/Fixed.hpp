#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    int fp_value;
    static const int n_bits =  8;

    public :
        Fixed(); // constractur
        Fixed(const Fixed &copy); // copy constractur
        Fixed   &operator=(const Fixed &copy); // copy assignment operator
        ~Fixed(); //destractur

        int     getRawBits( void ) const;
        void    setRawBits(int const raw);

        


};

#endif
