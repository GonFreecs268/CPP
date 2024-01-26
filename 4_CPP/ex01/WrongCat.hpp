/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:53:17 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/24 19:16:31 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :

	WrongCat(void);
	WrongCat(const WrongCat &src);
	~WrongCat(void);

	WrongCat& operator=(const WrongCat &src);

	void makeSound() const;
};