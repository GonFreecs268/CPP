/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:08:26 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/27 18:46:12 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/MateriaSource.hpp"

MateriaSource::MateriaSource() : _nbMaterias(0) {

	std::cout << _YELLOW "MateriaSource Constructor called" _END << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src) : _nbMaterias(src._nbMaterias) {
	
	std::cout << _YELLOW "MateriaSource Copy constructor called" _END << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	
	std::cout << _YELLOW "MateriaSource Destructor called" _END << std::endl;
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &src)
{
	std::cout << _YELLOW "MateriaSource Assignment operator called" _END << std::endl;
		if (this != &src)
	{
		_nbMaterias = src._nbMaterias;
		for(int i = 0; i < 4; i++)
		{
			if (src._inventory[i])
				_inventory[i] = src._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m) {

	if (!m)
	{
		std::cout << _RED "You tried to learn nothing... but it failed." _END << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == m->getType())
		{
			std::cout << _RED "You've already mastered the art of " << m->getType() << ". No need to learn it again." _END << std::endl;
			delete m;
			return ;
		}
	}
	if (_nbMaterias >= 4)
	{
		std::cout << _RED "Your memory book is full. To learn more, you must forget some first." _END << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << _FOREST_GREEN "You successfully learnt the mysterious ways of " << m->getType() << ". Added to your memory book." _END << std::endl;
			_nbMaterias++;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	
    if (!_inventory[0])
	{
        std::cout << _RED "No materia in the library. Can't create anything." _END << std::endl;
        return (NULL);
    }
    for (int i = 0; i < this->_nbMaterias && i < 4; i++)
	{
        if (_inventory[i]->getType() == type)
		{
            std::cout << _FOREST_GREEN "Successfully brewed " << type << " from the memory book." _END << std::endl;
            return (_inventory[i]->clone());
        }
    }
    std::cout << _RED "After a thorough search, you couldn't find the recipe for " << type << "." _END << std::endl;
    return (NULL);
}
