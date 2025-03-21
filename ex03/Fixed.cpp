#include "Fixed.hpp"

Fixed::Fixed() : fp_value(0){
}

Fixed::Fixed(const Fixed &copy){
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed &copy){
    if(this != &copy)
        this->fp_value = copy.fp_value;
    return (*this);
}

Fixed::~Fixed(){
}

Fixed::Fixed(const int integer){

    fp_value = integer << n_bits;
}

Fixed::Fixed(const float number){

    fp_value = roundf(number * (1 << n_bits));
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

bool Fixed::operator>(const Fixed &other) const {
    return this->fp_value > other.fp_value;
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->fp_value >= other.fp_value;
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->fp_value <= other.fp_value;
}

bool Fixed::operator==(const Fixed &other) const {
    return this->fp_value == other.fp_value;
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->fp_value != other.fp_value;
}

Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

const Fixed Fixed::operator++(int){

    Fixed tmp = *this;
    this->fp_value++;
    return tmp;
}


const Fixed Fixed::operator--(int){

    Fixed tmp = *this;
    this->fp_value--;
    return tmp;
}

Fixed Fixed::operator++(void){

    this->fp_value++;
    return *this;
}

Fixed Fixed::operator--(void){

    this->fp_value--;
    return *this;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b ? a : b);
}