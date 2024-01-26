/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:16:37 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/25 17:32:23 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public :

	Dog(void);
	Dog(const Dog &src);
	~Dog(void);

	Dog&	operator=(const Dog &src);

	virtual	Brain	*GetBrain() const;

	virtual void	makeSound(void) const;

	private :

	Brain *_brain;
};