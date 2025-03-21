#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__

#include <cmath>

class Fixed {
private:
	int _number;
	int _frac_bits = 8;
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &other);
	Fixed& operator =(const Fixed& other);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	void print(std::ostream& o);
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif