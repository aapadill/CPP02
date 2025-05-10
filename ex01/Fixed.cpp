/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 13:01:54 by aapadill          #+#    #+#             */
/*   Updated: 2025/05/10 15:01:55 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _raw_bits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    _raw_bits = value << _fractional_bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    _raw_bits = roundf(value * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = other; //Using this to match subject
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
		_raw_bits = other._raw_bits;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return _raw_bits;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    _raw_bits = raw;
}

float Fixed::toFloat() const
{
	// std::cout << "toFloat member function called" << std::endl;
	return (float)_raw_bits / (1 << _fractional_bits); //change
}

int Fixed::toInt() const
{
	// std::cout << "toInt member function called" << std::endl;
	return _raw_bits >> _fractional_bits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fx)
{
	os << fx.toFloat();
	return os;
}
