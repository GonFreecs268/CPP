/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:32:43 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/05 18:15:00 by jaristil         ###   ########.fr       */
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