/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:59:06 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/24 19:37:19 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {

	std::cout << _YELLOW "Dog Default Constructor Called" _END << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src.type) {

	std::cout << _YELLOW "Dog Copy Constructor Called" _END << std::endl;
	*this = src;
}

Dog::~Dog(void) {

	std::cout << _YELLOW "Dog Destructor Called" _END << std::endl;
}

Dog& Dog::operator=(const Dog &src) {

	std::cout << _YELLOW "Dog Copy Assignement Operator Called" _END << std::endl;
	if (this != &src)
		type = src.type;
	return  (*this);
}

void	Dog::makeSound(void) const {

	std::cout << _FOREST_GREEN _ITALIC "WOUUUF WOUUUUUF" _END << std::endl;
}

