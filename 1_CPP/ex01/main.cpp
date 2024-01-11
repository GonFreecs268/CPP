/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:47:03 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/11 18:05:38 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	if (ac != 3 || std::strlen(av[1]) == 0 || std::strlen(av[2]) == 0)
		std::cout << "If you seek for a dead soul, you must give it a name before !" << std::endl;
	else
	{
		Zombie*	Horde = zombieHorde(atoi(av[1]), av[2]);
		delete [] Horde;
	}
	return (0);
}