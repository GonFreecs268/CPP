/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:44:47 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/25 16:37:26 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "-----------------------------------------------" << std::endl;
    std::cout << _RED "               [ TEST 1 ]" _END << std::endl;
	 //Allocating half dogs half cats inside an animal tab, make them make a sound to identify them, deleting each one of them
    std::cout << "-----------------------------------------------" << std::endl;

    Animal*    animalTab[4];
    
    animalTab[0] = new Dog();
    std::cout << "-----------------------------------------------" << std::endl;
    animalTab[1] = new Dog();
    std::cout << "-----------------------------------------------" << std::endl;
    animalTab[2] = new Cat();
    std::cout << "-----------------------------------------------" << std::endl;
    animalTab[3] = new Cat();
    std::cout << "-----------------------------------------------" << std::endl;

    for (size_t i = 0; i < 4; i++)
	{
        animalTab[i]->makeSound();
		std::cout << "-----------------------------------------------" << std::endl;

	}
    for (size_t i = 0; i < 4; i++)
	{
        delete animalTab[i];
		std::cout << "-----------------------------------------------" << std::endl;
	}
	
	
	
    std::cout << _RED "               [ TEST 2 ]" _END << std::endl;
	// Demonstrating that copy constructor and assignment operator do memory deep allocation
	std::cout << "-----------------------------------------------" << std::endl;

    Dog* dog1 = new Dog();
    std::cout << "-----------------------------------------------" << std::endl;
    Dog* dog2 = new Dog(*dog1);
    std::cout << "-----------------------------------------------" << std::endl;

    dog1->makeSound();
    dog2->makeSound();
	std::cout << "-----------------------------------------------" << std::endl;

    delete dog1;
	std::cout << "-----------------------------------------------" << std::endl;
    delete dog2;
    std::cout << "-----------------------------------------------" << std::endl;
	
	
	
	std::cout << _RED "               [ TEST 3 ]" _END << std::endl;
    // Test relevant for next exercise show that an instance of Animal can be created cauz not abstract
	std::cout << "-----------------------------------------------" << std::endl;
    
	Animal* animalTest = new Animal();
	std::cout << "-----------------------------------------------" << std::endl;

    animalTest->makeSound();
	std::cout << "-----------------------------------------------" << std::endl;

    delete animalTest;

    std::cout << "-----------------------------------------------" << std::endl;



	std::cout << _RED "               [ TEST 4 ]" _END << std::endl;
	// Useless Test given by the intra
    std::cout << "-----------------------------------------------" << std::endl;

    const Animal* j = new Dog();
	std::cout << "-----------------------------------------------" << std::endl;
    const Animal* i = new Cat();
	std::cout << "-----------------------------------------------" << std::endl;

    delete j;
	std::cout << "-----------------------------------------------" << std::endl;
    delete i;
	std::cout << "-----------------------------------------------" << std::endl;



	std::cout << _RED "               [ TEST 5 ]" _END << std::endl;
	// WrongTest to show it still work correctly
	std::cout << "-----------------------------------------------" << std::endl;

	const WrongAnimal	*WA = new WrongAnimal();
	std::cout << "-----------------------------------------------" << std::endl;
	const WrongAnimal   *WC = new WrongCat();
	std::cout << "-----------------------------------------------" << std::endl;

	WA->makeSound();
	std::cout << "-----------------------------------------------" << std::endl;
	WC->makeSound();
	std::cout << "-----------------------------------------------" << std::endl;

	delete WA;
	std::cout << "-----------------------------------------------" << std::endl;
	delete WC;
	std::cout << "-----------------------------------------------" << std::endl;

    return (0);
}