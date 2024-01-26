/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:16:50 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/25 14:12:21 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	std::cout << _YELLOW "Brain Default Constructor Called" _END << std::endl;
}

Brain::Brain(std::string idea) {

	std::cout << _YELLOW "Brain Parametric Constructor called" _END << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
}

Brain::Brain(const Brain &src) {

	std::cout << _YELLOW "Brain Copy Constructor Called" _END << std::endl;
	*this = src;
}

Brain::~Brain(void) {

	std::cout << _YELLOW "Brain Destructor Called" _END << std::endl;
}

Brain&	Brain::operator=(const Brain &src) {
	
	std::cout << _YELLOW "Brain Copy Assignement Operator Called" _END << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i]; 
	return (*this);
}

std::string	Brain::getIdea(int index) const {

	return (ideas[index]);
}