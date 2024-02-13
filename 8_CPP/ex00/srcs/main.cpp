/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:57:36 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/12 15:37:28 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/easyfind.hpp"

void vectorExample() {
	
    try 
	{
        // Création d'un vecteur d'entiers
        std::vector<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);

        // Recherche de l'élément 3 dans le vecteur
        int element_to_find = 3;
        std::vector<int>::iterator it = easyfind(numbers, element_to_find);

        // Affichage du résultat
		std::cout << _SILVER "TEST OK for Vector:\n" _END << std::endl;
        std::cout << _FOREST_GREEN "Element " << element_to_find << " found at index: " << std::distance(numbers.begin(), it) << _END << std::endl;
		std::cout << "-----------------------------------------------" << std::endl;

		std::cout << _SILVER "TEST KO for Vector:\n" _END << std::endl;
        // Recherche d'un élément qui n'est pas dans le vecteur
        element_to_find = 10;
        it = easyfind(numbers, element_to_find);
    }
	catch (const NoMatchFound& e) 
	{
        // Gestion de l'exception NoMatchFound
        std::cerr << e.what() << std::endl;
    }
}

void listExample() {
	
    try 
	{
        // Création d'une liste d'entiers
        std::list<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);

        // Recherche de l'élément 3 dans la liste
        int element_to_find = 3;
        std::list<int>::iterator it = easyfind(numbers, element_to_find);

        // Affichage du résultat
		std::cout << _SILVER "TEST OK for List:\n" _END << std::endl;
        std::cout << _FOREST_GREEN "Element " << element_to_find << " found at position: " << std::distance(numbers.begin(), it) << _END << std::endl;
		std::cout << "-----------------------------------------------" << std::endl;
		
        // Recherche d'un élément qui n'est pas dans la liste
		std::cout << _SILVER "TEST KO for List:\n" _END << std::endl;
        element_to_find = 10;
        it = easyfind(numbers, element_to_find);
    } 
	catch (const NoMatchFound& e) 
	{
        // Gestion de l'exception NoMatchFound
        std::cerr << e.what() << std::endl;
    }
}
int main() {
	
    // Exemple avec un vecteur
    std::cout << _SILVER "\t\t\t\t\tVector Test Example:" _END << std::endl;
    vectorExample();
	
	std::cout << "-----------------------------------------------" << std::endl;
    std::cout << std::endl;

    // Exemple avec une liste
    std::cout << _SILVER "\t\t\t\t\tList Test Example:" _END << std::endl;
    listExample();

    return (0);
}
