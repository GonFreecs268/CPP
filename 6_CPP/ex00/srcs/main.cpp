/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:59:51 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/05 18:21:09 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScalarConverter.hpp"

int main(int ac, char **av) {

	
	if (ac == 2)
	{
		ScalarConverter::convert(av[1]);
	}
	// (void)ac;
	// (void)av;
	// std::cout << _SILVER "CONVERT FROM CHAR" _END << std::endl;
    // ScalarConverter::convert("a");
	// std::cout << "-----------------------------------------------" << std::endl;

	// std::cout << _SILVER "CONVERT FROM INT" _END << std::endl;
    // ScalarConverter::convert("0");
	// std::cout << "-----------------------------------------------" << std::endl;

	// std::cout << _SILVER "CONVERT FROM DOUBLE" _END << std::endl;
    // ScalarConverter::convert("42.42");
	// std::cout << "-----------------------------------------------" << std::endl;

	// std::cout << _SILVER "CONVERT FROM FLOAT" _END << std::endl;
    // ScalarConverter::convert("42.0f");
	// std::cout << "-----------------------------------------------" << std::endl;

	// std::cout << _SILVER "CONVERT FROM NaN" _END << std::endl;
    // ScalarConverter::convert("nan");
	// std::cout << "-----------------------------------------------" << std::endl;

	// std::cout << _SILVER "CONVERT FROM -INF" _END << std::endl;
    // ScalarConverter::convert("-inf");
    // std::cout << "-----------------------------------------------" << std::endl;
	
	// std::cout << _SILVER "CONVERT FROM +inf" _END << std::endl;
    // ScalarConverter::convert("+INF");
    // std::cout << "-----------------------------------------------" << std::endl;

    return (0);
}
