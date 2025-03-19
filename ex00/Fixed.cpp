#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _number(0){ std::cout << "Default constructor called\n";}

Fixed::Fixed(const Fixed &other) : _number(other._number){ 
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called\n";
	this->_number = other._number;
}

Fixed::~Fixed() {std::cout << "Destructor called\n";}