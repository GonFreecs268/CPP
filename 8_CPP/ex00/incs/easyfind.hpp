/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:57:36 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/12 17:02:05 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "colors.hpp"
#include <list> // std::List
#include <iterator> // std::distance
#include <vector> // std::vector
#include <algorithm> // find

template < typename T >
typename T::iterator easyfind(T &container, const int nb_to_find);

class NoMatchFound : public std::exception 
{
	public :
		virtual const char* what() const throw() {
			return (_RED "No match found in container" _END);
		}
};

#include "../srcs/easyfind.tpp"
