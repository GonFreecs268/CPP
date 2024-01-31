/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:05:04 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/31 19:53:19 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		std::cout << "	Let's create things" << std::endl;
		PresidentialPardonForm form1("Alfred Dreyfus");
		RobotomyRequestForm form2("Isaac Assimov");
		ShrubberyCreationForm form3("Garden");
		RobotomyRequestForm form4("Daneel Olivaw");
		Bureaucrat bur1("Maxence, practicly prime minister,", 4);
		Bureaucrat bur2("Vincent, member of the PM office,", 10);
		Bureaucrat bur3("Damien, a middle manager,", 30);
		Bureaucrat bur4("Thomas, a middle gouverment worker,", 50);
		Bureaucrat bur5("Jean, a low employee,", 80);
		Bureaucrat bur6("Alexandre, basicaly nobody in the administration,", 140);
		Bureaucrat bur7("Adrien, just better than an intern,", 147);
		std::cout << std::endl;

		std::cout << "	Let's have a look at my forms" << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
		std::cout << std::endl;

		std::cout << "	Let's test of the ShrubberyCreationForm" << std::endl;
		bur7.signForm(form3);
		std::cout << form3 << std::endl;
		bur6.executeForm(form3);
		bur6.signForm(form3);
		std::cout << form3 << std::endl;
		bur6.executeForm(form3);
		bur5.executeForm(form3);
		std::cout << std::endl;
		
		std::cout << "	Let's test of the RobotomyRequestForm" << std::endl;
		bur5.signForm(form2);
		std::cout << form2 << std::endl;
		bur4.executeForm(form2);
		bur4.signForm(form2);
		std::cout << form2 << std::endl;
		bur4.executeForm(form2);
		bur3.executeForm(form2);
		bur3.signForm(form4);
		std::cout << form4 << std::endl;
		bur3.executeForm(form4);
		bur3.executeForm(form4);
		bur3.executeForm(form4);
		std::cout << std::endl;

		std::cout << "	Test of the PresidentialPardonForm" << std::endl;
		bur3.signForm(form1);
		std::cout << form1 << std::endl;
		bur2.executeForm(form1);
		std::cout << form1 << std::endl;
		bur2.signForm(form1);
		bur2.executeForm(form1);
		bur1.executeForm(form1);
		std::cout << std::endl;

		std::cout << "	Let's destroy everything" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "\e[31mException: " <<e.what() << "\e[0m" << std::endl;
	}
	return (0);
}
