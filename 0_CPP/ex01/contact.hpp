/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:30:09 by jaristil          #+#    #+#             */
/*   Updated: 2023/11/13 17:31:31 by jaristil         ###   ########.fr       */
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
	public:
	std::string	first_name;
	std::string last_name;
	std::string	nickname;
	std::string phone_number;
	std::string	darkest_secret;

	Contact( void );
	~Contact( void );
	
	void display(void);
	//{
	// std::cout << first_name << " : " << phone_number << std::endl;
	// std::cout << " : ";
	// std::cout << phone_number << std::endl;	
	//}
};

#endif