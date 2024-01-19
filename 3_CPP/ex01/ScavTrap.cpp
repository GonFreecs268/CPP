/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:52:51 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/19 19:47:22 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	_name = "";
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << _YELLOW "Default Constructor Called" _END << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) {
	
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << _YELLOW "Parametric Constructor Called:" << this->GetName() << _END << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	
	_name = src._name;
	_health = src._health;
	_energy = src._energy;
	_attack = src._attack;
	std::cout << _YELLOW "Copy Constructor Called" _END << std::endl;
	return ;
}


ScavTrap::ScavTrap(ScavTrap const &src) {
	
	_name = src._name;
	*this = src;
	std::cout << _YELLOW "Copy Constructor Called" _END << std::endl;
	return ;
}
