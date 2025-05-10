/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 13:01:48 by aapadill          #+#    #+#             */
/*   Updated: 2025/05/10 19:44:34 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

/* orthodox canonical form marked with comments*/
class Fixed
{
	public:
		Fixed(); //default constructor
		Fixed(int value);
		Fixed(float value);
		Fixed(const Fixed &other); //copy constructor
		Fixed	&operator=(const Fixed &other); //assignment operator
		~Fixed(); //destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		//comparison operators
		bool	operator>(const Fixed &other)  const;
		bool	operator<(const Fixed &other)  const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		//arithmetic operators
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;

		//increment / decrement
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		//min / max
		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

	
	private:
		int					_raw_bits;
		static const int	_fractional_bits = 8;
};

//output operator: prints the float representation
std::ostream &operator<<(std::ostream &os, const Fixed &fx);
