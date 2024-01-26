/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:16:28 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/25 15:17:28 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "colors.hpp"

class Brain
{
	public :

	Brain(void);
	Brain(std::string idea);
	Brain(const Brain &src);
	~Brain(void);

    Brain&			operator=(const Brain &src);
    
    std::string     getIdea(int index) const;

	private :

	std::string	ideas[100];
	
};