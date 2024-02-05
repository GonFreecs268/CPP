/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:59:51 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/05 19:19:00 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScalarConverter.hpp"

/*
- nan/nanf : 
		char : '' instead of impossible 
		int: INTmin instead of impossible
		float : nan.0f instead of nanf
		double : nan.0 instead of nan

+inf/-inf :
		char : '' instead of impossible 
		int: INTmin instead of impossible
		float : inf.0f instead of nanf
		double : inf.0 instead of nan

check if possible to convert to double or not (for exampl 256.25 should be impossible instead of nothing)
*/

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
