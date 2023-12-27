/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:30:09 by jaristil          #+#    #+#             */
/*   Updated: 2023/12/27 18:40:01 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

class Contact
{
	// access specifier
	private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	public:
	Contact(void);
	~Contact(void);
	
	const std::string getFirstname();
	void	setFirstname(std::string const Firstname);
	
	// const	std::string getLastname();
	// void	setLastname(std::string Lastname);
	
	// const	std::string	getNickname();
	// void	setNickname(std::string Nickname);
	
	// const	std::string	getPhone_number();
	// void	setPhone_number(std::string Phone_number);
	
	// const	std::string	getDarkest_secret();
	// void	setDarkest_secret(std::string Darkest_secret);

	void display(void) const;
};

#endif