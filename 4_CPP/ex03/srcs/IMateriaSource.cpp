/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:51:45 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/26 20:01:15 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/IMateriaSource.hpp"

IMateriaSource::~IMateriaSource() {
	
	std::cout << _YELLOW "IMateriaSource Destructor called" _END << std::endl;
}
