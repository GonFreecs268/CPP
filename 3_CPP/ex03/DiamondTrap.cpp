/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:32:53 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/23 15:05:07 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap(), _name("default_clap_name") {

	_health = FragTrap::GetHealth();
	_energy = ScavTrap::GetEnergy();
	_attack = FragTrap::GetAttack();
	this->ClapTrap::_name = _name + "_clap_name";
	std::cout << _YELLOW "DiamondTrap Default Constructor Called" _END << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	
	_name = name;
	_health = FragTrap::_health;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
	std::cout << _YELLOW "DiamondTrap Parametric Constructor Called: " << this->_name << _END << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src._name) {
	
	_name = src._name;
	_health = src._health;
	_energy = src._energy;
	_attack = src._attack;
	// *this = src;
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
	
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoamI(void) {
	
    if (GetHealth() > 0)
	{
        std::cout << _FOREST_GREEN "I am the one and only " << _name << _END << std::endl;
		std::cout << _FOREST_GREEN "I am the one and only " << this->ClapTrap::_name << _END << std::endl;
    }
    return ;
}

