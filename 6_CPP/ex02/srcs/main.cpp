/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:40:35 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/07 17:47:57 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Base.hpp"

Base* generate(void) {

	unsigned int random = rand() % 3;
	switch(random)
	{
		case 0:
		std::cout << _YELLOW "Class A created" _END << std::endl;
		return (new A);
		case 1:
		std::cout << _YELLOW "Class B created" _END << std::endl;
		return (new B);
		case 2:
		std::cout << _YELLOW "Class C created" _END << std::endl;
		return (new C);
		default:
		return (NULL);
 	}
}

void	identify(Base *p) {

	A *ptr_A = dynamic_cast<A*>(p);
	if (!ptr_A)
	{
		B *ptr_B = dynamic_cast<B*>(p);
		if (!ptr_B)
		{
			C *ptr_C = dynamic_cast<C*>(p);
			if (!ptr_C)
				std::cout << _FOREST_GREEN "Type of p is undefined" _END << std::endl;
			else
				std::cout << _FOREST_GREEN "Type of p is C" _END << std::endl;
		}
		else
			std::cout << _FOREST_GREEN "Type of p is B" _END << std::endl;
	}
	else
		std::cout << _FOREST_GREEN "Type of p is A" _END << std::endl;
}

void	identify(Base &p) {

	Base tmp;
	try
	{
		tmp =  dynamic_cast<A&>(p);
		std::cout << _FOREST_GREEN "Type of p is A" _END << std::endl;
		return ;
	}
	catch(const std::exception& e) {(void)e; }
	try
	{
		tmp =  dynamic_cast<B&>(p);
		std::cout << _FOREST_GREEN "Type of p is B" _END << std::endl;
		return ;
	}
	catch(const std::exception& e) {(void)e; }
	try
	{
		tmp =  dynamic_cast<C&>(p);
		std::cout << _FOREST_GREEN "Type of p is C" _END << std::endl;
		return ;
	}
	catch(const std::exception& e) {(void)e; }
	std::cout << _FOREST_GREEN "Type of p is undefined" _END << std::endl;
}

int main()
{
	srand((time(NULL)));
	std ::cout << _SILVER "CLASS INDENTIFIICATION TEST"  _END << std::endl;
	Base *p[10];
	for (int i = 0; i < 10; i++)
	{
		std::cout << "p" << i << ": ";
		p[i] = generate();
	}

	std::cout << _SILVER "class identification via pointer function:" _END << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "p" << i << ": ";
		identify(p[i]);
	}

	std::cout << _SILVER "class identification via reference function:" _END << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "p" << i << ": ";
		identify(*p[i]);
	}

	std::cout << _SILVER "undefined type via pointer and reference :" _END << std::endl;

	Base p10;	
	identify(p10);
	identify(&p10);
	
	for (int i = 0; i < 10; i++)
	{
		delete p[i];
	}
	
	return (0);
}

