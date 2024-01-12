/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:55:39 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/12 15:11:54 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>
#include <cstring>
#include <string.h>

int	main() {

	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "String's adress is: " << &str << std::endl;
	std::cout << "StringPTR's adress is: " << stringPTR << std::endl;
	std::cout << "StringREF's adress is: " << &stringREF << std::endl;
	
	std::cout << "String's value is: " << str << std::endl;
	std::cout << "StringPTR's value is: " << *stringPTR << std::endl;
	std::cout << "StringREF's value is: " << stringREF << std::endl;

	return (0);
}