/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:18:07 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/09 16:54:50 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Array.hpp"

int main() {
	
    try 
	{
        // Test de la classe Array avec des entiers
        Array<int> intArray(5);
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            intArray[i] = i * 10;
        }
		std::cout << _FOREST_GREEN "Size of intArray: " << intArray.size() << _END << std::endl;
		std::cout << "" << std::endl;
		
        std::cout << _SILVER _YELLOW "Printing intArray:" _END << std::endl;
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << _FOREST_GREEN << intArray[i] << " " << _END;
        }

        // Test de la fonction iter sur le tableau d'entiers
        std::cout << _SILVER _YELLOW "\n\nPrinting intArray using iter:" _END << std::endl;
        iter(intArray.getArray(), intArray.size(), print<int>);

	    Array<int> emptyArray;
		try 
		{
        	// Test de la création d'un Array vide
        	std::cout << _SILVER _YELLOW "\nCreating an empty Array:" _END << std::endl;
	
        	// Affichage de la taille de l'Array vide
			// Test de l'exception pour size NULL
        	std::cout << _FOREST_GREEN "Size of emptyArray: " << emptyArray.size() << _END << std::endl;
		}
		catch (const Array<int>::EmptySize &e)
		{
			std::cerr << _RED "Caught Exception : " << e.what() << _END << std::endl;
		}
		try
		{
        	// Test de l'exception pour un index hors limites
        	std::cout << _SILVER _YELLOW "\nTrying to access out-of-bounds element:" _END << std::endl;
        	std::cout << intArray[10] << std::endl; 
		}
		catch(const Array<int>::WrongIndex &e)
		{
			std::cerr << _RED "Caught Exception : " << e.what() << _END << std::endl;
		}
		std::cout << "" << std::endl;
    }
	catch (const std::exception &e)
	{
		std::cerr << _RED "Caught Exception: " << e.what() << _END << std::endl;
	}

    return (0);
}


