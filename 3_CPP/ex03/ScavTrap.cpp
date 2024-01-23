/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:52:51 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/23 17:26:38 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {

	// _name = "";
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << _YELLOW "ScavTrap Default Constructor Called" _END << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	
	// _name = name;
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << _YELLOW "Scavtrap Parametric Constructor Called: " << _name << _END << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src._name) {
	
	// _name = src._name;
	// _health = src._health;
	// _energy = src._energy;
	// _attack = src._attack;
	*this = src;
	std::cout << _YELLOW "ScavTrap Copy Constructor Called" _END << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {

	std::cout << _YELLOW "ScavTrap Destructor Called" _END << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &src) {

	std::cout << _YELLOW "Scavtrap Copy Assignement Operator Called" _END << std::endl;
	if (this != &src)
	{
		this->_name = src.GetName();
		this->SetHealth(src._health);
		this->SetEnergy(src._energy);
		this->SetAttack(src.GetAttack());
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target) {

	if (_health > 0)
	{
		if (_energy > 0)
		{
			_energy--;
			std::cout << _FOREST_GREEN "ScavTrap " << _name << " attack " << target
			<< ", causing " << _attack << " damages !" _END << std::endl;
		}
		else
		{
			std::cout << _FOREST_GREEN "ScavTrap " << _name << " needs energy to attack!" _END << std::endl;
		}
	}
	else
	{
		std::cout << _FOREST_GREEN "ScavTrap's " << _name <<  " has no health left. I mean... he's dead ! Dead cant' attack, this is not The Walking Dead" _END << std::endl;
	}
	return ;
}

void	ScavTrap::guardGate(void) {
	
		if (_health > 0)
		{
		std::cout << _FOREST_GREEN "ScavTrap " << _name << " is now in Gate keeper mode !" _END << std::endl;
		}
		else
		{
		std::cout << _FOREST_GREEN "ScavTrap " << _name << " can no longer react as it is out of order" _END << std::endl;
		}
}
