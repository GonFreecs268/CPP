/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:02:17 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/16 17:25:49 by jaristil         ###   ########.fr       */
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
	Fixed(const Fixed &src);
	Fixed(const int intg);
	Fixed(const float flt);
	~Fixed(void);

	// Surcharge d'opérateur
	Fixed&	operator = (const Fixed &src);

	// Surcharge d'opérateur arithmetiques
	Fixed	operator/(const Fixed &src) const;
	Fixed	operator*(const Fixed &src) const;
	Fixed	operator+(const Fixed &src) const;
	Fixed	operator-(const Fixed &src) const;

	// Surchage d'opérateur de comparaison
	bool	operator==(const Fixed &fixed) const;
	bool	operator!=(const Fixed &fixed) const;
	bool	operator>=(const Fixed &fixed) const;
	bool	operator<=(const Fixed &fixed) const;
	bool	operator>(const Fixed &fixed) const;
	bool	operator<(const Fixed &fixed) const;

	// Surcharge d'opérateur d'incrémentation
	Fixed	operator++(int);
	Fixed&	operator++(void);
	Fixed	operator--(int);
	Fixed&	operator--(void);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	
	int		toInt( void ) const;
	float	toFloat( void ) const;

	static Fixed&		min(Fixed &n1, Fixed &n2);
	static const Fixed&	min(const Fixed &n1, const Fixed &n2);
	static Fixed&		max(Fixed &n1, Fixed &n2);
	static const Fixed&	max(const Fixed &n1, const Fixed &n2);

	private :

	int _FixedPoint;
	static const int _FractBits = 8;

};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif