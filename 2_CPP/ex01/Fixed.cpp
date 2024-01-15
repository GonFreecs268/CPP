/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:19 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/15 18:58:11 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	
	std::cout << "Default Constructor Called" << std::endl;
	this->_FixedPoint = 0;
	return ;
}

Fixed::Fixed(const Fixed &num) {

	std::cout << "Copy Constructor Called" << std::endl;
	*this = num;
	return ;
}

Fixed::Fixed(const int intg) {

	std::cout << "Integer Constructor Called" << std::endl;
	this->_FixedPoint = intg << _FractBits;
	return ;
}

Fixed::Fixed(const float flt) : _FixedPoint(roundf(flt * (1 << _FractBits))) {
	
	std::cout << "Float Constructor Called" << std::endl;
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


int	Fixed::toInt( void ) const {

	return ((this->getRawBits()) >> _FractBits);
}

float	Fixed::toFloat( void ) const {

	return (static_cast<float> (this->getRawBits()) / (1 << _FractBits));
}

Fixed& Fixed::operator=(const Fixed &num) {

	// pour eviter l'auto_attribution
	if (this != &num)
	{
		this->_FixedPoint = num.getRawBits();
	}
	// permet a = b = c, sinon pas obligatoire de return
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj) {

	out << obj.toFloat();
	return (out);
}
