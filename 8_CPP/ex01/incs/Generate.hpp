/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Generate.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:35:11 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/14 16:15:22 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "colors.hpp"

class Generate
{
	public:

	// Constructeurs & Destructeurs
	Generate(int start, int mod) : _value(start), _mod(mod) {}

	// Surcharge d'opérateurs
	int	operator()()
	{
		_value += rand() % _mod;
		return (_value);
	}
	private:

	int	_value;
	int	_mod;
};

