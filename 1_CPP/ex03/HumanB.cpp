/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:58:21 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/13 16:58:57 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB(void) {

// 	std::cout << "Constructor called" << std::endl;
// 	return ;
// }

HumanB::HumanB(std::string name) {

	this->_name = name;
	this->_weapon = NULL;
	std::cout << "Constructor called: " << this->_name << " is ready to kill" << std::endl;
	return ;
}

HumanB::~HumanB(void) {

	std::cout << "Destructor called: " << this->_name << std::endl;
	return ;
}

void	HumanB::attack(void) {

	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " only need his fist to destroy" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon *weapon) {

	this->_weapon = weapon;
	return ;	
}