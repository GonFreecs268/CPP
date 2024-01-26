/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:05:53 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/24 18:50:08 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {

	std::cout << _YELLOW "Animal Default Constructor Called" _END << std::endl;
	return ;
}

Animal::Animal(std::string _type) : type(_type) {
	
	std::cout << _YELLOW "Animal Parametric Constructor Called: " << type <<  _END << std::endl;
	return ;
}


Animal::Animal(const Animal &src) : type(src.type) {

	std::cout << _YELLOW "Animal Copy Constructor Called" _END << std::endl;
	*this = src;
	return ;	
}

Animal::~Animal(void) {

	std::cout << _YELLOW "Animal Destructor Called" _END << std::endl;
	return ;
}

std::string	Animal::GetType(void) const {

	return (this->type);
}

Animal& Animal::operator=(const Animal &src) {

	std::cout << _YELLOW "Animal Copy Assignement Operator Called" _END << std::endl;
	if (this != &src)
		type = src.type;
	return  (*this);
}

void	Animal::makeSound(void) const {

	std::cout << _FOREST_GREEN _ITALIC "* LOUD AND UNRECOGNIZE NOISE *" _END << std::endl;
	return ;
}