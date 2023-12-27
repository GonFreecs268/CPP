/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:20:49 by jaristil          #+#    #+#             */
/*   Updated: 2023/12/27 18:37:19 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void) {
	
	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}
	//{
	// std::cout << firstname << " : " << phone_number << std::endl;
	// std::cout << " : ";
	// std::cout << phone_number << std::endl;	
	//}

const std::string	Contact::getFirstname(void) {

	return this->firstname;	
}

void	Contact::setFirstname(std::string Firstname) {

	this->firstname = Firstname;
	return ;
}

// const std::string Contact::getLastname(void) {

// 	return this->lastname;
// }

// void	Contact::setLastname(std::string Lastname) {
	
// 	this->lastname = Lastname;
// 	return ;
// }





// Contact::Contact(const std::string &first, const std::string &last, const std::string &nick,
// 				const std::string &phone, const std::string &secret)
// 	: firstname(first), lastname(last), nickname(nick), phone_number(phone), darkest_secret(secret)
// {
// 	std::cout << "Constructor called" << std::endl;

// 	std::cout << "this->firstname = " << this->getfirstname << std::endl;
// 	std::cout << "this->lastname = " << this->getlastname << std::endl;
// 	std::cout << "this->nickname = " << this->getnickname << std::endl;
// 	std::cout << "this->phone_number = " << this->getphone_number << std::endl;
// 	std::cout << "this-> darkest_secret = " << this->getdarkest_secret << std::endl;

// 	// this->firstname = "Juvles";
// 	return;
// }

void	Contact::display(void) const {
	
	std::cout << "Display is called" << std::endl;
	
	std::cout << firstname << " : " << phone_number << std::endl;
	return;
}

