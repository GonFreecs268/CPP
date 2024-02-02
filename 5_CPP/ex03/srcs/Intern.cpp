/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:44:11 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/02 17:06:24 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Intern.hpp"

Intern::Intern() {

	std::cout << _YELLOW "Default Constructor called: Intern" _END << std::endl;
}

Intern::Intern(Intern const &src) {

	(void)src;
	std::cout << _YELLOW "Copy Constructor called: Intern" _END << std::endl;
}

Intern::~Intern() {

	std::cout << _YELLOW "Destructor called: Intern" _END << std::endl;
}

Intern&	Intern::operator=(Intern const &rhs) {
	
	(void)rhs;
	std::cout << _YELLOW "Assignment Operator called: Intern" _END << std::endl;
	return (*this);
}

AForm *Intern::makeForm(std::string form_name, std::string target) {

	std::string	form_tab[3] = {"presidential request", "robotomy request", "shrubbery request"};
	AForm *form;
	
	int i = 0;
	while (i < 3)
	{
		if (form_name == form_tab[i])
			break ;
		i++;
	}
	switch (i)
	{
	case 0:
		form = new PresidentialPardonForm(target);
		std::cout << _FOREST_GREEN "Making Presidential Request..." _END << std::endl;
		break ;
	case 1:
		form = new RobotomyRequestForm(target);
		std::cout << _FOREST_GREEN "Making Robotomy Request..." _END << std::endl;
		break ;
	case 2:
		form = new ShrubberyCreationForm(target);
		std::cout << _FOREST_GREEN "Making Shrubbery Request..." _END << std::endl;
		break ;
	default:
		form = NULL;
		std::cout << _RED "I dont think this is the request you want to submit..." _END << std::endl;
		break ;
	}
	return (form);
}