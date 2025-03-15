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
        this->fp_value = copy.fp_value;
    return (*this);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int integer){

    fp_value = integer << n_bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number){

    fp_value = roundf(number * (1 << n_bits));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const{

    return (float)fp_value / (1 << n_bits);
}
int Fixed::toInt(void) const{
    
    return fp_value >> n_bits;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator<(const Fixed &other) const {
    return this->fp_value < other.fp_value;
}

