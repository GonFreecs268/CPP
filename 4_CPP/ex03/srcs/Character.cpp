/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:23:49 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/27 20:17:48 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Character.hpp"

int	Character::getNbMaterias() const {

	return (_nbMaterias);
}

AMateria* Character::getAMateria(int idx) const {

	if (idx < 0 || idx > 3)
		return (NULL);
	return (_inventory[idx]);
}

std::string const &Character::getName() const {

	return (_name);
}

Character::Character(std::string name) : _name(name), _nbMaterias(0) {
	
	std::cout << _YELLOW "Character Parametric Constructor called: " << _name << _END << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &src) : _name(src.getName()), _nbMaterias(src.getNbMaterias()) {
	
	std::cout << "Character Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
		{
			_inventory[i] = src._inventory[i]->clone();
		}
		else
			_inventory[i] = NULL;
	}
}

Character::~Character() {
	
	std::cout << _YELLOW "Character Destructor called" _END << std::endl;
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

Character&	Character::operator=(Character const &src)
{
	std::cout << _YELLOW "Character Assignment operator called" _END << std::endl;
		if (this != &src)
	{
		_name = src._name;
		_nbMaterias = src._nbMaterias;
		for(int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (src._inventory[i])
			{
				_inventory[i] = src._inventory[i]->clone();
			}
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

void	Character::equip(AMateria* m) {
	
	if (!m) 
	{
		std::cout << _RED "No materias to pick up." _END << std::endl;
		return ;
	}
	if (_nbMaterias == 0)
		_inventory[0] = m;
	else if (_nbMaterias < 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!_inventory[i])
			{
				_inventory[i] = m;
				break ;
			}
		}
	}
	_nbMaterias++;
}

void	Character::unequip(int idx) {
	
	if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		_inventory[idx] = NULL;
		_nbMaterias--;
	}
	else
	{
		std::cout << _RED "No loot in slot number " << idx << ". Can't unequip, nothing to drop" _END << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target) {
	
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << _RED "Cannot use any materia. There is no materia in index: " << idx << _END << std::endl;
}
