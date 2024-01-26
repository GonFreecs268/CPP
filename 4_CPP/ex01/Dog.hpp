/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:16:37 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/25 13:35:25 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :

	Dog(void);
	Dog(const Dog &src);
	~Dog(void);

	Dog&	operator=(const Dog &src);

	virtual	Brain	*GetBrain() const;

	void	makeSound(void) const;

	private :

	Brain *_brain;
};