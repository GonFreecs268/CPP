/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:33:33 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/12 20:01:41 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	
	std::cout << "Constructeur called" << std::endl;
	return ;
}

Weapon::Weapon(std::string type) {

	this->_type = type;
	std::cout << "Constructor Called: " << this->_type << " will kill and protect for you" << std::endl;
	return;
}

Weapon::~Weapon(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

std::string	Weapon::getType(void) const {

	return (this->_type);
}

void	Weapon::setType(std::string type) {

	this->_type = type;
	return ;
}