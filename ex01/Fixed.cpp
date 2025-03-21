#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _number(0){ std::cout << "Default constructor called\n";}

Fixed::Fixed(const int number) {
	std::cout << "Int constructor called\n";
	this->_number = number;
}

Fixed::Fixed(const float number) {
	std::cout << "Float constructor called\n";
	this->_number = roundf(number);
	this->_frac_bits = (roundf(number) - this->_number) * 10000000;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called\n";
	*this = other; 
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called\n";
	this->setRawBits( other.getRawBits() );
	return *this;
}

Fixed::~Fixed() {std::cout << "Destructor called\n";}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called\n"; 
	return this->_number;
}

void Fixed::setRawBits( int const raw ) {
	//std::cout << "setRawBits member function called\n"; 
	this->_number = raw;
}
