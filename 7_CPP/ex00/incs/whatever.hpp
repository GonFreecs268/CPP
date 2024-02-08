/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:18:07 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/08 18:38:20 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include "colors.hpp"

template< typename T >
void swap(T &x, T &y) {
	
	T tmp = x;
	x = y;
	y = tmp;
	return ;
}

template< typename T >
T const &min(T const &x, T const &y) {

	return (x < y ? x : y);
}

template< typename T >
T const &max(T const &x, T const &y) {
	
	return (x > y ? x : y);
};