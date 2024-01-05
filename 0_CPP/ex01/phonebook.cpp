/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:37:08 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/05 19:05:27 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void) {
	
	// std::cout << "Constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook(void) {
	
	// std::cout << "Destructor called" << std::endl;
	return ;
}

static bool isValidPhone(const std::string &phoneNumber)
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

    while (true)
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << "\n\nBye.\n" << std::endl;
            throw std::runtime_error("");
        }
        if (input.empty())
        {
            std::cout << "\nCommand cannot be empty. Retry please.\n" << std::endl;
            continue ;
        }
        if (validPhone && !isValidPhone(input))
        {
            std::cout << "\nFormat not valid for this phone number. Retry please.\n" << std::endl;
            continue ;
        }
        break ;
    }
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

void	Phonebook::DisplayContact(Contact infos) const {

	std::cout << "First Name: " << infos.getFirstname() << std::endl;
	std::cout << "Last Name: " << infos.getDarkest_secret() << std::endl;
	std::cout << "Nickname: " << infos.getNickname() << std::endl;
	std::cout << "Phone Number: " << infos.getPhone_number() << std::endl;
	std::cout << "Darkest Secret: " << infos.getDarkest_secret() << std::endl;
	return ;
}

void	Phonebook::PrintMenu(void) const {
	std::cout << "                                                         " << std::endl;
 	std::cout << "|***********************Phonebook***********************|" << std::endl;
    std::cout << "|                        ADD                            |" << std::endl;
    std::cout << "|                        SEARCH                         |" << std::endl;
    std::cout << "|                        EXIT                           |" << std::endl;
    std::cout << "|*******************************************************|" << std::endl;
	return ;
}

void	PrintString(std::string str) {

	if (str.size() <= 10)	
		std::cout << std::setw(10) << str;
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	return ;
}

int	Phonebook::DisplayDirectory(Phonebook &directory) const {

	int index = 0;
	
	std::cout << "\nContact List\n" << std::endl;

	for  (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		PrintString(directory._contact[i].getFirstname());
		std::cout << "|";
		PrintString(directory._contact[i].getLastname());
		std::cout << "|";
		PrintString(directory._contact[i].getNickname());
		std::cout << std::endl;	
	}
	
	std::cout << "\nChoose a contact\n" << std::endl;
	std::string str;
	getline(std::cin, str);
	if (str.size() != 1 || !isdigit(str[0]))
		return (std::cout << "\nWrong index, please choose an index\n" << std::endl, 0);
	index = atoi(str.c_str());
	if (index >= 1 && index <= 8)
		return (DisplayContact(directory._contact[index - 1]), 0);
	return (std::cout << "\nPlease, try again.\n" << std::endl, 0);
}