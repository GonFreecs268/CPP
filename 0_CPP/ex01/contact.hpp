/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:30:09 by jaristil          #+#    #+#             */
/*   Updated: 2023/12/22 18:11:26 by jaristil         ###   ########.fr       */
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
	const std::string	firstname;
	const std::string	lastname;
	const std::string	nickname;
	const std::string	phone_number;
	const std::string	darkest_secret;

	public:
	Contact(const std::string &first, const std::string &last, const std::string &nick,
			const std::string &phone, const std::string &secret);
	~Contact(void);
	
	const	std::string getFirstname();
	void	setFirstname(std::string Firstname);
	const	std::string getLastname();
	void	setLastname(std::string Lastname);
	const	std::string	getNickname();
	void	setNickname(std::string Nickname);
	const	std::string	getPhone_number();
	void	setPhone_number(std::string Phone_number);
	const	std::string	getDarkest_secret();
	void	setDarkest_secret(std::string Darkest_secret);

	void display(void) const;
	//{
	// std::cout << firstname << " : " << phone_number << std::endl;
	// std::cout << " : ";
	// std::cout << phone_number << std::endl;	
	//}
};

#endif