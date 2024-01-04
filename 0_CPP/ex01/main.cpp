/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:32:43 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/04 12:44:54 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int	main() {
	
	Phonebook	Directory;
	
	Directory.AddContact(Directory._contact[0]);
	std::cout << Directory._contact[0].getFirstname() << std::endl;
	return (0);	
}