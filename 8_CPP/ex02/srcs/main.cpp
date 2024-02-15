/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:06:30 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/15 14:31:59 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return (0);
}

// int main()
// {
//     std::list<int> lstack; // Utiliser std::list au lieu de MutantStack
//     lstack.push_back(5); // Utiliser push_back() au lieu de push()
//     lstack.push_back(17);

//     std::cout << lstack.back() << std::endl; // Utiliser back() au lieu de top()

//     lstack.pop_back(); // Utiliser pop_back() au lieu de pop()

//     std::cout << lstack.size() << std::endl;

//     lstack.push_back(3);
//     lstack.push_back(5);
//     lstack.push_back(737);
//     lstack.push_back(0);

//     std::list<int>::iterator it = lstack.begin(); // Utiliser begin() au lieu de MutantStack<int>::iterator
//     std::list<int>::iterator ite = lstack.end(); // Utiliser end() au lieu de MutantStack<int>::iterator

//     ++it;
//     --it;

//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::list<int> s(lstack); // Utiliser le constructeur par copie de std::list au lieu de std::stack<int>

//     return (0);
// }


