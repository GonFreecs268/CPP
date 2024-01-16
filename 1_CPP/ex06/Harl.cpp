/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:15:06 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/16 16:34:56 by jaristil         ###   ########.fr       */
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
			<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you\ndid, I wouldn’t be asking for more!\n" << std::endl;
	return ;
}

void Harl::warning( void ) {
	
	std::cout << " [ WARNING ]\n"
			<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started\nworking here since last month.\n" << std::endl;
	return ;
}

void Harl::error( void ) {
	
	std::cout << "[ ERROR ]\n"
			<< "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
	return ;
}


void    Harl::complain(std::string level)
{
    void        (Harl::*FctPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string choice[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};	
	int	i;
	
	for (i = 0; i < 4 && choice[i] != level; i++);
	switch (i)
	{
		case 0:
			(this->*FctPtr[i++])();
		case 1:
			(this->*FctPtr[i++])();
		case 2:
			(this->*FctPtr[i++])();
		case 3:
			(this->*FctPtr[i])();
			break ;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]\n";
	}
}
