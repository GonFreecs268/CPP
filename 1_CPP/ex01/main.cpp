/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:47:03 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/12 14:29:38 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	if (ac != 3 || std::strlen(av[1]) == 0 || std::strlen(av[2]) == 0)
		std::cout << "If you seek for a dead soul, you must give it a name before !" << std::endl;
	else
	{
		int	num = std::atoi(av[1]);
		std::string Z_name = av[2];
		
		Zombie	*Horde = zombieHorde(num, Z_name);
		delete [] Horde;
	}
	return (0);
}