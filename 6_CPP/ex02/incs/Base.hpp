/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:40:35 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/07 17:25:44 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdlib.h> //srand/rand
#include "colors.hpp"

class Base
{
	public:

    virtual ~Base() {};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};