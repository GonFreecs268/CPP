/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:32:43 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/05 19:05:53 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int	main() {
	
	Phonebook	Directory;
	
	Directory.PrintMenu();
	try
	{
		Directory.AddContact(Directory._contact[0]);
		std::cout << Directory._contact[0].getFirstname() << std::endl;
	}
	catch (const std::runtime_error &e)
	{
		std::cerr << "Program close successfully" << e.what() << std::endl; 
	}
	return (0);	
}

/*int main()
{
    Phonebook Directory;

    try
    {
        while (true)
        {
            Directory.printMenu();
            std::string choice = Directory.listenInput("Enter your choice: ", false);

            if (choice == "ADD")
            {
                for (int i = 0; i < 8; ++i)
                {
                    if (Directory._contact[i].getFirstname().empty())
                    {
                        Directory.addContact(Directory._contact[i]);
                        break;
                    }
                }
            }
            else if (choice == "SEARCH")
            {
                for (int i = 0; i < 8; ++i)
                {
                    if (!Directory._contact[i].getFirstname().empty())
                    {
                        Directory.displayContact(Directory._contact[i]);
                        break;
                    }
                }
            }
            else if (choice == "EXIT")
            {
                std::cout << "Goodbye!\n" << std::endl;
                break;
            }
            else
            {
                std::cout << "Invalid choice. Please try again.\n" << std::endl;
            }
        }
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Program closed successfully: " << e.what() << std::endl;
    }

    return 0;
}
*/