/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:16:37 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/24 18:15:10 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public :

	Dog(void);
	Dog(const Dog &src);
	~Dog(void);

	Dog&	operator=(const Dog &src);

	void	makeSound(void) const;
};