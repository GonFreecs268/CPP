/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:02:17 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/15 18:54:05 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string.h>
#include <cmath>

class	Fixed
{
	public :

	Fixed(void);
	Fixed(const Fixed &num);
	Fixed(const int intg);
	Fixed(const float flt);
	~Fixed(void);

	Fixed&	operator = (const Fixed &num);


	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	
	int		toInt( void ) const;
	float	toFloat( void ) const;
	
	private :

	int _FixedPoint;
	static const int _FractBits = 8;

};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif