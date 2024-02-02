/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:05:04 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/02 15:52:02 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/Intern.hpp"

// int main()
// {
// 	Intern someRandomIntern;
// 	AForm* rrf;
	
// 	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
// 	return (0);
// }

// int	main(void) {

// 	Bureaucrat* Jack = new Bureaucrat("Jack", 1);
// 	Bureaucrat James = Bureaucrat("James", 9);
// 	Bureaucrat John("John", 150);
// 	std::cout << std::endl;
// 	std::cout << _BOLD _CYAN << *Jack << "\n" << James << "\n" << John << _END << std::endl;
// 	try 
// 	{
// 		Bureaucrat Jason("Jason", 169);
// 	}
// 	catch (std::exception& e) 
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;
// 	try 
// 	{
// 		Jack->IncrementGrade();
// 	}
// 	catch (std::exception& e) 
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	Jack->DecrementGrade();
// 	std::cout << _BOLD << *Jack << _END << std::endl;
// 	std::cout << std::endl;
// 	try 
// 	{
// 		John.DecrementGrade();
// 	}
// 	catch (std::exception& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	John.IncrementGrade(60);
// 	std::cout << _BOLD << John << _END << std::endl;
// 	std::cout << std::endl;
// 	James.DecrementGrade();
// 	std::cout << _BOLD << James << _END << std::endl;
// 	James.IncrementGrade();
// 	James.IncrementGrade();
// 	James.IncrementGrade();
// 	std::cout << _BOLD << James << _END << std::endl;
// 	std::cout << std::endl;

// 	AForm*	form1 = new ShrubberyCreationForm("form1c");
// 	AForm*	form2 = new RobotomyRequestForm("form2d");
// 	AForm*	form3 = new PresidentialPardonForm("form3e");
// 	std::cout << std::endl;
// 	John.signForm(*form1);
// 	try {
// 		John.signForm(*form2);
// 	}
// 	catch (std::exception& e) 
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	try 
// 	{
// 		John.signForm(*form3);
// 	}
// 	catch (std::exception& e) 
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	Jack->IncrementGrade(10);
// 	Jack->signForm(*form2);
// 	Jack->signForm(*form3);
// 	std::cout << std::endl;
// 	John.executeForm(*form1);
// 	try 
// 	{
// 		John.executeForm(*form2);
// 	}
// 	catch (std::exception& e) 
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	try 
// 	{
// 		John.executeForm(*form3);
// 	}
// 	catch (std::exception& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	Jack->executeForm(*form2);
// 	Jack->executeForm(*form3);
// 	std::cout << std::endl;
// 	Intern someRandomIntern;
// 	std::cout << std::endl;
// 	AForm* rrf1;
// 	AForm* rrf2;
// 	AForm* rrf3;
// 	rrf1 = someRandomIntern.makeForm("robotomy request", "Bender");
// 	rrf3 = someRandomIntern.makeForm("presidential request", "Bender");
// 	try 
// 	{
// 		rrf2 = someRandomIntern.makeForm("Badrequest", "Bender");
// 	}
// 	catch (std::exception& e) 
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;
	
// 	delete rrf1;
// 	delete rrf3;
// 	delete form1;
// 	delete form2;
// 	delete form3;
// 	delete Jack;

// 	return 0;
// }

// int	main(void)
// {
// 	try
// 	{
// 		Intern		intern_0;
// 		Intern		intern_1(intern_0);
// 		Intern		intern_2;
// 		Bureaucrat	boss("Max", 2);
// 		AForm		*form0;
// 		AForm		*form1;
// 		AForm		*form2;
// 		AForm		*form3;

// 		std::cout << std::endl;
// 		std::cout << "All intern are the same... " << std::endl;
// 		intern_2 = intern_0;
// 		std::cout << std::endl;

// 		//RobotomyRequestForm
// 		std::cout << "Boss: Intern ! I want you to make a robot of Daneel Olivaw" << std::endl;
// 		form0 = intern_0.makeForm("robotomy request", "Daneel Olivaw");
// 		if (form0)
// 		{
// 			std::cout << "Boss: Ok, let's have a look at what you made..." << std::endl;
// 			std::cout << *form0 << std::endl;
// 			boss.signForm(*form0);
// 			std::cout << *form0 << std::endl;
// 			boss.executeForm(*form0);
// 			delete form0;
// 		}
// 		else
// 			std::cout << "Boss: you idiot, you should know what I want anyway!" << std::endl;
// 		std::cout << std::endl;

// 		//PresidentialPardonForm
// 		std::cout << "Boss: Intern ! I want you to make a presidential pardon form for Alfred Dreyfus" << std::endl;
// 		form1 = intern_0.makeForm("presidential pardon", "Alfred Dreyfus");
// 		if (form1)
// 		{
// 			std::cout << "Boss: Ok, let's have a look at what you made..." << std::endl;
// 			std::cout << *form1 << std::endl;
// 			boss.signForm(*form1);
// 			std::cout << *form1 << std::endl;
// 			boss.executeForm(*form1);
// 			delete form1;
// 		}
// 		else
// 			std::cout << "Boss: you idiot, you should know what I want anyway!" << std::endl;
// 		std::cout << std::endl;
		
// 		//ShrubberyCreationForm
// 		std::cout << "Boss: Intern ! I want you to make a shrubbery creation form for the garden" << std::endl;
// 		form2 = intern_0.makeForm("shrubbery creation", "Garden");
// 		if (form2)
// 		{
// 			std::cout << "Boss: Ok, let's have a look at what you made..." << std::endl;
// 			std::cout << *form2 << std::endl;
// 			boss.signForm(*form2);
// 			std::cout << *form2 << std::endl;
// 			boss.executeForm(*form2);
// 			delete form2;
// 		}
// 		else
// 			std::cout << "Boss: you idiot, you should know what I want anyway!" << std::endl;
// 		std::cout << std::endl;

// 		//Siomething else
// 		std::cout << "Boss: Intern ! I want you to make a ********** form for M. Bean" << std::endl;
// 		form3 = intern_0.makeForm("**********", "M. Bean");
// 		if (form3)
// 		{
// 			std::cout << "Boss: Ok, let's have a look at what you made..." << std::endl;
// 			std::cout << *form3 << std::endl;
// 			boss.signForm(*form3);
// 			std::cout << *form3 << std::endl;
// 			boss.executeForm(*form3);
// 			delete form3;
// 		}
// 		else
// 			std::cout << "Boss: you idiot, you should know what I want anyway!" << std::endl;
// 		std::cout << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	return (0);
// }

int main() {
    try {
        // Create an intern
        Intern intern;

        // Create a bureaucrat
        Bureaucrat boss("Max", 2);

        // The intern tries to create a RobotomyRequestForm for Bender
        AForm *robotomyForm = intern.makeForm("robotomy request", "Bender");

        // Boss examines the form and signs it
        if (robotomyForm) {
            std::cout << "Boss: Intern, I want you to make a robot of Bender!\n";
            std::cout << "Intern creates a RobotomyRequestForm:\n";
            std::cout << *robotomyForm << std::endl;

            boss.signForm(*robotomyForm);
            std::cout << "Boss signs the form:\n";
            std::cout << *robotomyForm << std::endl;

            // Boss executes the form
            boss.executeForm(*robotomyForm);
        } else {
            std::cout << "Boss: You idiot, you should know what I want anyway!\n";
        }

        // Clean up
        delete robotomyForm;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
