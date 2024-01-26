/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:59:06 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/25 17:32:23 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog") {

	std::cout << _YELLOW "Dog Default Constructor Called" _END << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &src) : AAnimal(src.type) {

	std::cout << _YELLOW "Dog Copy Constructor Called" _END << std::endl;
	_brain = new Brain((*src.GetBrain()));
}

Dog::~Dog(void) {

	delete _brain;
	std::cout << _YELLOW "Dog Destructor Called" _END << std::endl;
}

Dog& Dog::operator=(const Dog &src) {

	std::cout << _YELLOW "Dog Copy Assignement Operator Called" _END << std::endl;
	if (this != &src)
	{
		type = src.type;
		_brain = new Brain((*src.GetBrain()));
	}
	return  (*this);
}

void	Dog::makeSound(void) const {

	std::cout << _FOREST_GREEN _ITALIC "WOUUUF WOUUUUUF" _END << std::endl;
}

Brain	*Dog::GetBrain(void) const {
	
	return (_brain);
}
