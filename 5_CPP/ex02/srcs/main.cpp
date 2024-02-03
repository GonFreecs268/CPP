/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:05:04 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/03 19:07:23 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/ShrubberyCreationForm.hpp"

void ShrubberyOK()
{
	Bureaucrat Nico("Nico", 1);
    ShrubberyCreationForm Home_N("Home_N");
	try 
	{
        Nico.signForm(Home_N);
    } 
	catch (std::exception &e) 
	{
        std::cerr << e.what() << std::endl;
    }
    try 
	{
        Nico.executeForm(Home_N);
    } 
	catch (const std::exception &e) 
	{
        std::cerr << e.what() << std::endl;
    }
}

void ShrubberyKO() 
{
    Bureaucrat Jules("Jules", 138);
    ShrubberyCreationForm Home_J("Home_J");
    try 
	{
        Jules.signForm(Home_J);
    } 
	catch (const std::exception &e) 
	{
        std::cerr << e.what() << std::endl;
    }
    try 
	{
        Jules.executeForm(Home_J);
    } 
	catch (const std::exception &e)
	{
        std::cerr << e.what() << '\n';
    }
    // try 
	// {
    //     Jules.IncrementGrade();
    //     Jules.executeForm(Home_J);
    // } 
	// catch (const std::exception &e) 
	// {
    //     std::cerr << e.what() << '\n';
    // }
}

void RobotomyOK() 
{
    Bureaucrat Alan("Alan", 45);
    RobotomyRequestForm home_A("home_TA");
	try
	{
		Alan.signForm(home_A);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    try 
	{
        Alan.executeForm(home_A);
    } 
	catch (const std::exception &e) 
	{
        std::cerr << e.what() << std::endl;
    }
}

void RobotomyKO() 
{
    Bureaucrat Tiff("Tiff", 148);
    RobotomyRequestForm Home_T("Home_T");
    try 
	{
        Tiff.signForm(Home_T);
    } 
	catch (const std::exception &e) 
	{
        std::cerr << e.what() << std::endl;
    }
    try 
	{
        Tiff.executeForm(Home_T);
    } 
	catch (const std::exception &e) 
	{
        std::cerr << e.what() << std::endl;
    }
}

void PresidentialOK() 
{
    Bureaucrat Tito("Tito", 5);
    PresidentialPardonForm Home_T("Home_T");
    try 
	{
        Tito.signForm(Home_T);
    } 
	catch (const std::exception &e)
	{
        std::cerr << e.what() << std::endl;
    }
    try 
	{
        Tito.executeForm(Home_T);
    } 
	catch (const std::exception &e) 
	{
        std::cerr << e.what() << std::endl;
    }
}

void PresidentialKO() 
{
    Bureaucrat Marie("Marie", 8);
    PresidentialPardonForm Home_M("Home_M");
    try 
	{
        Marie.signForm(Home_M);
    } 
	catch (const std::exception &e)
	{
        std::cerr << e.what() << std::endl;
    }
    try 
	{
        Marie.executeForm(Home_M);
    } 
	catch (const std::exception &e) 
	{
        std::cerr << e.what() << std::endl;
    }
}

int main() 
{
    try 
	{
		// srand(time(0));
        std::cout << _SILVER << "\t\t\t\t TEST \n" << _END << std::endl;

        std::cout << _SILVER "1. Shrubbery Form Test - OK:" _END << std::endl;
        try 
		{
            ShrubberyOK();
        } 
		catch (const std::exception &e) 
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
        }
        std::cout << std::endl;
		
        std::cout << _SILVER "2. Shrubbery Form Test - KO:" _END << std::endl;
        try
		{
            ShrubberyKO();
        } 
		catch (const std::exception &e) 
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
        }
        std::cout << std::endl;

        std::cout << _SILVER "3. Robotomy Form Test - OK:" _END << std::endl;
        try
		{
            RobotomyOK();
        } 
		catch (const std::exception &e)
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
        }
        std::cout << std::endl;

        std::cout << _SILVER "4. Robotomy Form Test - KO:" _END << std::endl;
        try 
		{
            RobotomyKO();
        } 
		catch (const std::exception &e)
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
        }
        std::cout << std::endl;

        std::cout << _SILVER "5. Presidential Form Test - OK:" _END << std::endl;
        try 
		{
            PresidentialOK();
        } 
		catch (const std::exception &e) 
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
        }
        std::cout << std::endl;
		
		std::cout << _SILVER "6. Presidential Form Test - KO:" _END << std::endl;
		try
		{
			PresidentialKO();
		}
		catch(const std::exception &e)
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
		}
    } 
	catch (const std::exception &e) 
	{
        std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
    }

    return (0);
}
