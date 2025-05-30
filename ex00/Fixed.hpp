/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 13:01:48 by aapadill          #+#    #+#             */
/*   Updated: 2025/05/10 19:45:24 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

/* orthodox canonical form marked with comments*/
class Fixed
{
	public:
		Fixed(); //default constructor
		Fixed(const Fixed &other); //copy constructor
		Fixed	&operator=(const Fixed &other); //assignment operator
		~Fixed(); //destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private:
		int					_raw_bits;
		static const int	_fractional_bits = 8;
};
