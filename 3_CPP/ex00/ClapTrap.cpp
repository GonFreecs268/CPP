/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:51:48 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/19 15:58:19 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _health(10), _energy(10), _attack(0) {

	std::cout << _YELLOW "Default Constructor Called" _END << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attack(0) {

	std::cout << _YELLOW "Parametric Constructor Called" _END << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name) {

	std::cout << _YELLOW "Copy Constructor Called" _END << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void) {

	std::cout << _YELLOW "Destructor Called" _END << std::endl;
	return ;
}

std::string	ClapTrap::GetName(void) const {

	return (this->_name);
}

void	ClapTrap::SetHealth(unsigned int amount) {

	this->_health = amount;
	return ;
}

unsigned int	ClapTrap::GetHealth(void) const {

	return (this->_health);
}

void	ClapTrap::SetEnergy(unsigned int amount) {

	this->_energy = amount;
	return ;
}

unsigned int	ClapTrap::GetEnergy(void) const {

	return (this->_energy);
}

void	ClapTrap::SetAttack(unsigned int amount) {

	this->_attack = amount;
	return ;
}

unsigned int	ClapTrap::GetAttack(void) const {

	return (this->_attack);
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &src) {

	std::cout << _YELLOW "Copy Assignement Operator Called" _END << std::endl;
	if (this != &src)
	{
		this->_name = src.GetName();
		this->SetHealth(src.GetHealth());
		this->SetEnergy(src.GetEnergy());
		this->SetAttack(src.GetAttack());
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {

	if (GetHealth() > 0)
	{
		if (GetEnergy() > 0)
		{
			SetEnergy(GetEnergy() - 1);
			std::cout << _FOREST_GREEN "Claptrap " << this->GetName() << " attack " << target
			<< ", causing " << this->GetAttack() << " damages !" _END << std::endl;
		}
		else
		{
			std::cout << _FOREST_GREEN "ClapTrap " << GetName() << " needs energy to attack!" _END << std::endl;
		}
	}
	else
	{
		std::cout << _FOREST_GREEN "ClapTrap's " << GetName()<<  " has no health left. I mean... he's dead ! Dead cant' attack, this is not The Walking Dead" _END << std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (GetHealth() > amount)
	{
        SetHealth(GetHealth() - amount);
        std::cout << _FOREST_GREEN "ClapTrap " << GetName() << " has been attacked and loses " 
                  << amount << " Health's point !" _END << std::endl;
    }
	else
	{
		SetHealth(0);
		std::cout << _FOREST_GREEN "ClapTrap's " << GetName()<<  " has no health left. I mean... he's dead !" _END << std::endl;
    }
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (GetHealth() > 0)
	{
		if (GetEnergy() > 0)
		{
			SetEnergy(GetEnergy() - 1);
			SetHealth(GetHealth() + amount);
			std::cout << _FOREST_GREEN "ClapTrap " << GetName() << " is healing itself and recovers "
			<< amount << " health's point !" _END << std::endl;
		}
		else
		{
			std::cout << _FOREST_GREEN "ClapTrap " << GetName() << " needs energy to heal himself!" _END << std::endl;
		}
	}
	else
	{
	std::cout << _FOREST_GREEN "ClapTrap's " << GetName()<<  " has no health left. I mean... he's dead !... we can't heal a dead..." _END << std::endl;
	}
	return ;
}
