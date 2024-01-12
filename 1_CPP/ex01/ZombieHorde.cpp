/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:47:46 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/12 14:41:50 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {

	Zombie* New = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		New[i].SetName(name);
		New[i].announce();
	}
	return (New);
}