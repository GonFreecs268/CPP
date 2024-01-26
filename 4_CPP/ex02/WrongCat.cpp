/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:57:07 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/24 19:19:53 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {

	std::cout << _YELLOW "WrongCat Parametric Constructor Called: " << type <<  _END << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal(src) {

	std::cout << _YELLOW "WrongCat Copy Constructor Called" _END << std::endl;
	return ;
}

WrongCat::~WrongCat(void) {

	std::cout << _YELLOW "WrongCat Destructor Called" _END << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat &src) {

	std::cout << _YELLOW "WrongCat Copy Assignement Operator Called" _END << std::endl;
	if (this != &src)
		type = src.type;
	return (*this);
}

void	WrongCat::makeSound(void) const {

	std::cout << _FOREST_GREEN _ITALIC " Miaouuu" _END << std::endl;
	return ;
}
