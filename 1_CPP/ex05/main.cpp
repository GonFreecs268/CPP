/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:49:16 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/16 16:34:47 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {

	
	if (ac == 2)
	{	
		Harl harl;
		harl.complain(av[1]);
	}
	else
	{
		std::cerr << "[ * KAREN VOICE * ]\n"
	 			<< "Harl cannot complains about this..." << std::endl;
	}
	return (0);
}