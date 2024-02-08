/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:18:07 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/08 14:55:20 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include "colors.hpp"

template< typename T, typename F >
void	iter(T *array, size_t len, F f) {

	try 
	{
        if (!array || len <= 0 || !f) {
            throw std::invalid_argument("Invalid argument.");
        }
        for (size_t i = 0; i < len; i++)
            f(array[i]);
    } 
    catch (const std::invalid_argument& e) {
        std::cout << _RED "Caught exception: " << e.what() << _END << std::endl;
    }
}

template< typename T >
void 	print(T &value) {

	std::cout << _FOREST_GREEN << value << _END << std::endl;
}