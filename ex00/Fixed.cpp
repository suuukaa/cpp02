#include "Fixed.hpp"

Fixed::Fixed() : fp_value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){
    *this = copy;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &copy){
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &copy)
        this->fp_value = copy.getRawBits();
    return (*this);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw){
    fp_value = raw;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return fp_value;
}
