/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:15:40 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/24 19:35:53 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {

	std::cout << _YELLOW "Cat Default Constructor Called" _END << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src.type) {

	std::cout << _YELLOW "Cat Copy Constructor Called" _END << std::endl;
	*this = src;
}

Cat::~Cat(void) {

	std::cout << _YELLOW "Cat Destructor Called" _END << std::endl;
}

Cat& Cat::operator=(const Cat &src) {

	std::cout << _YELLOW "Cat Copy Assignement Operator Called" _END << std::endl;
	if (this != &src)
		type = src.type;
	return  (*this);
}

void	Cat::makeSound(void) const {

	std::cout << _FOREST_GREEN _ITALIC "MEOOW MEOOW" _END << std::endl;
}

