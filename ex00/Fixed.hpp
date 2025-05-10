/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 13:01:48 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/28 13:01:49 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class Fixed
{
	public:
		/* orthodox canonical form */
		Fixed(); //default constructor
		Fixed(const Fixed &other); //copy constructor
		Fixed &operator=(const Fixed &other); //assignment operator
		~Fixed(); //destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private:
		int					_raw_bits;
		static const int	_fractional_bits = 8;
};

