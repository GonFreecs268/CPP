/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:16:06 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/26 15:07:07 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public :

	Cat(void);
	Cat(const Cat &src);
	~Cat(void);

	Cat& operator=(const Cat &src);

	virtual	Brain	*GetBrain(void) const;

	virtual void	makeSound(void) const;

	private :

	Brain  *_brain;
};