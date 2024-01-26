/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:16:06 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/24 18:18:39 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public :

	Cat(void);
	Cat(const Cat &src);
	~Cat(void);

	Cat& operator=(const Cat &src);

	void	makeSound(void) const;
};