/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:57:44 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/13 16:57:54 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(void) {

// 	std::cout << "Constructor called" << std::endl;
// 	return ;
// }

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {

	this->_name = name;
	std::cout << "Constructor called: " << this->_name << " is ready to fight" << std::endl;
	return ;
}

HumanA::~HumanA(void) {

	std::cout << "Destructor called: " << this->_name << std::endl;
	return ;
}

void	HumanA::attack(void) {
	
	std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}
