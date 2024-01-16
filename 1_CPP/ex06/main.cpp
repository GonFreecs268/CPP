/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:14:44 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/16 15:39:30 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
	
	if (ac != 2)
	{	
		std::cout << "[ * KAREN VOICE * ]\n"
	 			<< "Harl cannot complains about this..." << std::endl;
	}
	else
	{
		Harl harl;
		harl.complain(av[1]);
	}
	return (0);
}