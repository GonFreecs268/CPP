/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:20:49 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/04 12:36:04 by jaristil         ###   ########.fr       */
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

std::string	Contact::getFirstname(void) const {

	return this->firstname;	
}

void	Contact::setFirstname(std::string Firstname) {

	this->firstname = Firstname;
	return ;
}

std::string Contact::getLastname(void) const {

	return this->lastname;
}

void	Contact::setLastname(std::string Lastname) {
	
	this->lastname = Lastname;
	return ;
}

std::string	Contact::getNickname(void) const {
	
	return this->nickname;
}

void	Contact::setNickname(std::string Nickname) {

	this->nickname = Nickname;
	return ;
}

std::string	Contact::getPhone_number(void) const {

	return this->phone_number;
}

void	Contact::setPhone_number(std::string Phone_number) {

	this->phone_number = Phone_number;
	return ;
}

std::string	Contact::getDarkest_secret(void) const {

	return  this->darkest_secret;
}

void	Contact::setDarkest_secret(std::string Darkest_secret) {
	
	this->darkest_secret = Darkest_secret;
	return ;
}











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

