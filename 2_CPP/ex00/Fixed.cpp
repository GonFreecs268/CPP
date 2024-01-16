/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:19 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/16 11:35:38 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	
	std::cout << "Default Constructor Called" << std::endl;
	this->_FixedPoint = 0;
	return ;
}

Fixed::Fixed(const Fixed &src) {

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor Called" << std::endl;
	return ;
}

int	Fixed::getRawBits( void ) const {

	return (this->_FixedPoint);
}

void	Fixed::setRawBits( int const raw ) {

	this->_FixedPoint = raw;
	return ;
}

Fixed& Fixed::operator=(const Fixed &src) {

	// pour eviter l'auto_attribution
	if (this != &src)
	{
		this->_FixedPoint = src.getRawBits();
	}
	// permet a = b = c, sinon pas obligatoire de return
	return (*this);
}
