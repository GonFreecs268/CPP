/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:32:53 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/22 19:49:30 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap() {

	_name = "default_clap_name";
	_health = FragTrap::_health; // FragTrap::GetHealth();
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
	std::cout << _YELLOW "DiamondTrap Default Constructor Called" _END << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	
	_name = name;
	_health = FragTrap::_health;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
	std::cout << _YELLOW "DiamondTrap Parametr // FragTrap::GetHealth();ic Constructor Called: " << this->GetName() << _END << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src._name) {
	
	// _name = src._name;
	// _health = src._health;
	// _energy = src._energy;
	// _attack = src._attack;
	*this = src;
	std::cout << _YELLOW "DiamondTrap Copy Constructor Called" _END << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << _YELLOW "DiamondTrap Destructor Called" _END << std::endl;
	return ;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &src) {

	std::cout << _YELLOW "DiamondTrap Copy Assignement Operator Called" _END << std::endl;
	if (this != &src)
	{
		this->_name = src.GetName();
		this->ClapTrap::_name = src.ClapTrap::_name;
		this->_health = src.FragTrap::_health;
		this->_energy = src.ScavTrap::_energy;
		this->_attack = src.FragTrap::_attack;
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string &target) {
	
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoamI(void) {

	std::cout << _BLUE "I am the one and only " << _name << _END << std::endl;
	std::cout << _BLUE "I am the one and only " << ClapTrap::_name << _END << std::endl;
	return ;
}
