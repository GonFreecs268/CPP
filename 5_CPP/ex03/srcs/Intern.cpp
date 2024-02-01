/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:44:11 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/01 20:19:23 by jaristil         ###   ########.fr       */
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
	AForm *form = NULL;
	
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
		break ;
	case 1:
		form = new RobotomyRequestForm(target);
		break ;
	case 2:
		form = new ShrubberyCreationForm(target);
		break ;
	default:
		std::cout << "error" << std::endl;
		break ;
	}
	return (form);
}