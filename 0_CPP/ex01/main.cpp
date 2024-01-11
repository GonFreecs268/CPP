/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:32:43 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/10 17:44:07 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int	main() {
	
	Phonebook	Directory;
    std::string choice;
	
    try
    {
        int nextIndex = 0;

        while (true)
        {
            Directory.PrintMenu();
            choice = Directory.ListenInput("Enter your choice: ", false);
            if (choice == "ADD" || choice == "add" || choice == "Add")
            {
                Directory.AddContact(Directory.GetContact(nextIndex));
                nextIndex = (nextIndex + 1) % 8;
            }
            else if (choice == "SEARCH" || choice == "Search" || choice == "search")
            {
                for (int i = 0; i < 8; ++i)
                {
                    if (!Directory.GetContact(i).getFirstname().empty())
                    {
                        Directory.DisplayDirectory(Directory);
                        break;
                    }
                }
            }
            else if (choice == "EXIT" || choice == "Exit" || choice == "exit")
            {
                std::cout << "\nBye.\n" << std::endl;
                return (0);
            }
            else
            {
                std::cout << "\nInvalid choice. Please, try again.\n" << std::endl;
            }
        }
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Program close successfully" << e.what() << std::endl;
    }
    return (0);
}
