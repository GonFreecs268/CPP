/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:47:22 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/23 15:00:58 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {

	_name = "";
	_health = 100;
	_energy = 100;
	_attack = 30;
	std::cout << _YELLOW "FragTrap Default Constructor Called" _END << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	
	_name = name;
	_health = 100;
	_energy = 100;
	_attack = 30;
	std::cout << _YELLOW "FragTrap Parametric Constructor Called: " << this->GetName() << _END << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src._name) {
	
	// _name = src._name;
	// _health = src._health;
	// _energy = src._energy;
	// _attack = src._attack;
	*this = src;
	std::cout << _YELLOW "FragTrap Copy Constructor Called" _END << std::endl;
	return ;
}

FragTrap::~FragTrap(void) {

	std::cout << _YELLOW "FragTrap Destructor Called" _END << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap const &src) {

	std::cout << _YELLOW "FragTrap Copy Assignement Operator Called" _END << std::endl;
	if (this != &src)
	{
		this->_name = src.GetName();
		this->SetHealth(src.GetHealth());
		this->SetEnergy(src.GetEnergy());
		this->SetAttack(src.GetAttack());
	}
	return (*this);
}

void	FragTrap::attack(const std::string &target) {

	if (GetHealth() > 0)
	{
		if (GetEnergy() > 0)
		{
			SetEnergy(GetEnergy() - 1);
			std::cout << _FOREST_GREEN "FragTrap " << this->GetName() << " attack " << target
			<< ", causing " << this->GetAttack() << " damages !" _END << std::endl;
		}
		else
		{
			std::cout << _FOREST_GREEN "FragTrap " << GetName() << " needs energy to attack!" _END << std::endl;
		}
	}
	else
	{
		std::cout << _FOREST_GREEN "FragTrap's " << GetName()<<  " has no health left. I mean... he's dead ! Dead cant' attack, this is not The Walking Dead" _END << std::endl;
	}
	return ;
}

void	FragTrap::highFivesGuys(void) {

	if (GetHealth() > 0)
	{
		std::cout << _FOREST_GREEN "FragTrap " << GetName() << " give you a high five for the good times you shared wiht it !" _END << std::endl;	
	}
	else
	{
		std::cout << _FOREST_GREEN "FragTrap " << GetName() << " is not working anymore and cannot high five you, sorry..." _END << std::endl;
	}
}

