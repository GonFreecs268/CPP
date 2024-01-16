/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:49:02 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/16 15:09:26 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {

	std::cout << "Constructor Called" << std::endl;
	return ;
}

Harl::~Harl( void ) {
	
	std::cout << "Destructor Called" << std::endl;
	return ;
}

void Harl::debug( void ) {
	
	std::cout << "[ DEBUG ]\n"
			<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do !\n" << std::endl;
	return ;
}

void Harl::info( void ) {
	
	std::cout << "[ INFO ]\n"
			<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you\ndid, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void Harl::warning( void ) {
	
	std::cout << " [ WARNING ]\n"
			<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started\nworking here since last month." << std::endl;
	return ;
}

void Harl::error( void ) {
	
	std::cout << "[ ERROR ]\n"
			<< "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}


void    Harl::complain(std::string level)
{
    void        (Harl::*FctPtr[4])();
    std::string choice[4];

    FctPtr[0] = &Harl::debug;
    FctPtr[1] = &Harl::info;
    FctPtr[2] = &Harl::warning;
    FctPtr[3] = &Harl::error;
	
    choice[0] = "DEBUG";
    choice[1] = "INFO";
    choice[2] = "WARNING";
    choice[3] = "ERROR";
	
    for (int i = 0; i < 4; i++)
    {
        if (choice[i] == level)
            (this->*FctPtr[i])();
    }
	return ;
}
