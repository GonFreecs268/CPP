/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:05:04 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/31 14:00:57 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

int main() {
    try 
	{
        std::cout << _UNDERLINE _BLUE << "\t\t\t\t FORM TESTING\n" << _END << std::endl;

        std::cout << _SILVER "1. Creating a Form 'PX00' with grade to sign too high:" _END << std::endl;
        try 
		{
            Form form1("PX00", 0, 20);
            std::cout << form1 << std::endl;
        } 
		catch (const std::exception &e)
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
        }
        std::cout << std::endl;

        std::cout << _SILVER "2. Creating a Form 'PX01' with grade to execute too high:" _END << std::endl;
        try 
		{
            Form form2("PX01", 15, 0);
            std::cout << form2 << std::endl;
        } 
		catch (const std::exception &e) 
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
        }
        std::cout << std::endl;

        std::cout << _SILVER "3. Creating a Form 'PX02' with grade to sign too low:" _END << std::endl;
        try 
		{
            Form form3("PX02", 5, 154);
            std::cout << form3 << std::endl;
        } 
		catch (const std::exception &e) 
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
        }
        std::cout << std::endl;

        std::cout << _SILVER "4. Creating a Form 'PX03' with grade to execute too low:" _END << std::endl;
        try 
		{
            Form form4("PX03", 15, 155);
            std::cout << form4 << std::endl;
        } 
		catch (const std::exception &e) 
		{
            std::cerr << _RED "Exception: " << e.what() << _END << std::endl;
        }
        std::cout << std::endl;

        std::cout << _SILVER "5. Testing form signing and bureaucrat signingForm:" _END << std::endl;
        try 
		{
            Form form5("PX04", 10, 20);
            Form form6("PX05", 8, 5);

            std::cout << form5 << std::endl << std::endl;

            Bureaucrat Nico("Nico", 9);
            std::cout << Nico << std::endl << std::endl;

            Nico.signForm(form5);
            std::cout << form5 << std::endl << std::endl;

            Nico.signForm(form6);
            std::cout << form6 << std::endl << std::endl;

            Nico.IncrementGrade();
            std::cout << Nico << std::endl << std::endl;

            Nico.signForm(form6);
            std::cout << form6 << std::endl << std::endl;
        } 
		catch (const std::exception &e) 
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
