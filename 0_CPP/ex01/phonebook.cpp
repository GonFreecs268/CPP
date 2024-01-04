/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:37:08 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/04 18:52:19 by jaristil         ###   ########.fr       */
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

bool isValidPhone(const std::string &phoneNumber)
{
    int digitCount = 0;

    for (size_t i = 0; i < phoneNumber.size(); ++i)
    {
        char c = phoneNumber[i];
        if (std::isdigit(c))
            digitCount++;
        else if (i == 0 && c != '0' && c != '+')
            return false;
        else if (c != ' ' && c != '-')
            return false;
        else if (i > 0 && c == '+')
            return false;
    }
    return (digitCount >= 10);
}

std::string Phonebook::ListenInput(const std::string &prompt, bool validPhone)
{
    std::string input;
	bool err = false;
	
    do {
		err = false;
        std::cout << prompt;
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << "\nBye.\n" << std::endl;
            exit(1); // do not call the destructor
        }
		if (validPhone && !isValidPhone(input))
		{
			std::cout << "\nFormat not valid for this phone number. Retry please.\n" << std::endl;
			err = true;
		}
    } while(err);
	
    return (input);
}

void	Phonebook::AddContact(Contact &New) {

	std::cout << "\nAdding new contact to directory...\n" << std::endl;

	New.setFirstname(ListenInput("Enter Firstname: ", false));
	New.setLastname(ListenInput("Enter Lastname: ", false));
	New.setNickname(ListenInput("Enter Nickname: ", false));
	New.setPhone_number(ListenInput("Enter Phone_number: ", true));
	New.setDarkest_secret(ListenInput("Enter Darkest_secret: ", false));
	
	std::cout << "\nContact added.\n" << std::endl;
	return ;
}

// void	Phonebook::DisplayContact(Contact ) {

// 	std::cout << getFirstname	
// }
