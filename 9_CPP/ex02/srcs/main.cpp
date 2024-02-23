/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:55:52 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/23 19:19:59 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PmergeMe.hpp"


int main() {
	
    PmergeMe pm;

    pm.addElement(3);
    pm.addElement(1);
    pm.addElement(5);
    pm.addElement(2);
    pm.addElement(4);

    pm.ford_johnson_vector();

    std::cout << "Vecteur trié : ";
    for (size_t i = 0; i < pm.getSize(); ++i) {
        std::cout << pm.getElement(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}


