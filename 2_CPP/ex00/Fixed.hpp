/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:02:17 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/16 11:35:42 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string.h>

class	Fixed
{
	public :

	Fixed(void);
	Fixed(const Fixed &src);
	~Fixed(void);

	Fixed&	operator = (const Fixed &src);


	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	
	private :

	int _FixedPoint;
	static const int _FractBits = 8;

};

#endif