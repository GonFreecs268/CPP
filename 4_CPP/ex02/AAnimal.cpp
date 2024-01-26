/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:05:53 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/25 17:08:53 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {

	std::cout << _YELLOW "AAnimal Default Constructor Called" _END << std::endl;
	return ;
}

AAnimal::AAnimal(std::string _type) : type(_type) {
	
	std::cout << _YELLOW "AAnimal Parametric Constructor Called: " << type <<  _END << std::endl;
	return ;
}


AAnimal::AAnimal(const AAnimal &src) : type(src.type) {

	std::cout << _YELLOW "AAnimal Copy Constructor Called" _END << std::endl;
	*this = src;
	return ;	
}

AAnimal::~AAnimal(void) {

	std::cout << _YELLOW "AAnimal Destructor Called" _END << std::endl;
	return ;
}

std::string	AAnimal::GetType(void) const {

	return (this->type);
}

AAnimal& AAnimal::operator=(const AAnimal &src) {

	std::cout << _YELLOW "AAnimal Copy Assignement Operator Called" _END << std::endl;
	if (this != &src)
		type = src.type;
	return  (*this);
}

// void	AAnimal::makeSound(void) const {

// 	std::cout << _FOREST_GREEN _ITALIC "* LOUD AND UNRECOGNIZE NOISE *" _END << std::endl;
// 	return ;
// }