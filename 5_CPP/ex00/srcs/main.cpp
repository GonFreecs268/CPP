/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:05:04 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/30 17:25:34 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

int main() {
    try
	{
        std::cout << _UNDERLINE _BLUE << "\t\t\t\t BUREAUCRAT TESTING\n" << _END << std::endl;

        std::cout << _SILVER "1. Creating a Bureaucrat named 'Nami' with grade 75:\n" _END << std::endl;
        Bureaucrat nami("Nami", 75);
        std::cout << "\n" << nami << std::endl;

        try
		{
            std::cout << _SILVER "\n2. Attempting to decrement Nami's grade by 80:\n" _END << std::endl;
            nami.DecrementGrade(80);  // This should throw GradeTooHighException
            std::cout << _FOREST_GREEN "Success: Grade decremented!" _END << std::endl;
       		std::cout << "\n" << nami << std::endl;

        }
		catch (const std::exception &e)
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
        }
        try
		{
            std::cout << _SILVER "\n3. Incrementing Nami's grade by 5:\n" _END << std::endl;
            nami.IncrementGrade(5);
            std::cout << nami << std::endl;
        }
		catch (const std::exception &e)
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
        }
		try
		{
        std::cout << _SILVER "\n4. Incrementing Nami's grade by 1:\n" _END << std::endl;
		nami.IncrementGrade();
		std::cout << nami << std::endl;
		}
		catch(const std::exception& e)
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
		}
		try
		{
		std::cout << _SILVER "\n4. Decrementing Nami's grade by 1:\n" _END << std::endl;
		nami.DecrementGrade();
		std::cout << nami << std::endl;
		}
		catch(const std::exception& e)
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
