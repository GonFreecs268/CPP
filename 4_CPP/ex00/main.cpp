/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:44:47 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/25 16:44:40 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << _RED "               [ TEST 1 ]" _END << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	const Animal *meta = new Animal();
	std::cout << "-----------------------------------------------" << std::endl;
	const Animal *j = new Dog();
	std::cout << "-----------------------------------------------" << std::endl;
	const Animal *i = new Cat();
	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << j->GetType() << " " << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << i->GetType() << " " << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	meta->makeSound();
	std::cout << "-----------------------------------------------" << std::endl;
	j->makeSound();
	std::cout << "-----------------------------------------------" << std::endl;
	i->makeSound();
	std::cout << "-----------------------------------------------" << std::endl;

	delete meta;
	std::cout << "-----------------------------------------------" << std::endl;
	delete j;
	std::cout << "-----------------------------------------------" << std::endl;
	delete i;
	std::cout << "-----------------------------------------------" << std::endl;




	std::cout << _RED "               [ TEST 2 ]" _END << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;


	const WrongAnimal	*test = new WrongAnimal();
	std::cout << "-----------------------------------------------" << std::endl;
	const WrongAnimal   *test2 = new WrongCat();
	std::cout << "-----------------------------------------------" << std::endl;


	test->makeSound();
	std::cout << "-----------------------------------------------" << std::endl;
	test2->makeSound();
	std::cout << "-----------------------------------------------" << std::endl;

	delete test;
	std::cout << "-----------------------------------------------" << std::endl;
	delete test2;
	std::cout << "-----------------------------------------------" << std::endl;

	return (0);
}