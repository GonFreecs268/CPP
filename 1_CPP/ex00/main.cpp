/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:42:06 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/11 18:00:43 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av) {

	Zombie	*New;

	if (ac != 2 || std::strlen(av[1]) == 0 || av[1][0] == '\0')
		std::cout << "If you seek for a dead soul, you must give it a name before !" << std::endl;
	else
	{
		Zombie::randomChump("Jules");
		New = Zombie::newZombie(av[1]);
		New->announce();
		delete (New);
	}
	return (0);
}