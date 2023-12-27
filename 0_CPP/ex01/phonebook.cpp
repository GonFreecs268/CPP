/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:37:08 by jaristil          #+#    #+#             */
/*   Updated: 2023/12/27 19:03:09 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void) {
	
	std::cout << "Constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook(void) {
	
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Phonebook::AddContact(Contact &New) {

	std::cout << "First Name : ";
	std::string name;

	std::cin >> name;
	New.setFirstname(name);
	return ;
}