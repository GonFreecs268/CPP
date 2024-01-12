/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:42:06 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/12 14:04:26 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av) {

	Zombie	*New, *New_2;
	// Zombie	Zombiee;

	if (ac != 2 || std::strlen(av[1]) == 0 || av[1][0] == '\0')
		std::cout << "If you seek for a dead soul, you must give it a name before !" << std::endl;
	else
	{
		New_2 = new Zombie();
		New_2->announce();
		delete (New_2);
		
		randomChump("Jules");
		
		New = newZombie(av[1]);
		New->announce();
		delete (New);

	}
	return (0);
}