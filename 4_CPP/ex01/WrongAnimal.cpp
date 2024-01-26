/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:35:37 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/24 19:21:54 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal") {
	
	std::cout << _YELLOW "WrongAnimal Default Constructor Called" _END << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string _type): type(_type) {
	
	std::cout << _YELLOW "WrongAnimal Parametric Constructor Called: " << type <<  _END << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src): type(src.type) {
	
	std::cout << _YELLOW "WrongAnimal Copy Constructor Called" _END << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void) {
	
	std::cout << _YELLOW "WrongAnimal Destructor Called" _END << std::endl;
	return ;
}

std::string	WrongAnimal::GetType(void) const {
	
	return (type);
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &src) {
	
	std::cout << _YELLOW "WrongAnimal Copy Assignement Operator Called" _END << std::endl;
	if (this != &src)
		type = src.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	
	std::cout << type << " : " _FOREST_GREEN _ITALIC "* LOUD AND UNRECOGNIZE NOISE *" _END << std::endl;
	return ;
}
