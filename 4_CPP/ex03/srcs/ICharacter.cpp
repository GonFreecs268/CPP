/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:11:59 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/26 16:26:28 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ICharacter.hpp"

ICharacter::~ICharacter() {
	
	std::cout << _YELLOW "ICharacter Destructor called" _END << std::endl;
}


