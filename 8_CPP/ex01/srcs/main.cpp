/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:49:50 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/13 18:52:12 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		// Span sp = Span(1); // should make an exception
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(9);
		sp.addNumber(17);
		sp.addNumber(11);
		// sp.addNumver(100); // should throw an exception
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		Span sp1(3);
		sp1 = sp;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}


// int main(void) {

// 	Span myRange(10005);
// 	std::srand(time(0)); 
	
// 	try {
// 		for (int i = 0; i < 6; i++) {
// 			int randomVal = std::rand();
// 			myRange.addNumber(randomVal);
// 			// std::cout << "myrange[i] val: " << myRange.getVal(i) << std::endl;
// 		}
// 		std::cout << "---- First range (add numbers) ----" << std::endl;
// 		std::cout << "shortest span is: " << myRange.shortestSpan() << std::endl;
// 		int longest = myRange.longestSpan();
// 		std::cout << "longest span is: " << longest << std::endl;
// 	}
	
// 	catch (std::exception& e) { 
// 		std::cout << e.what() << std::endl; 
// 	}
// 	try {
// 		std::vector<int> myRange2(5, 4);
// 		myRange.addNumber(myRange2);
		
// 		std::cout << "\n---- First range (add range2) ----" << std::endl;
// 		std::cout << "shortest span: " << myRange.shortestSpan() << std::endl;
// 		int longest = myRange.longestSpan();
// 		std::cout << "longest span: " << longest << std::endl;
// 	}
// 	catch (std::exception& e) { 
// 		std::cout << e.what() << std::endl; 
// 	}
// 	try {
// 		Span myRange3(myRange);
// 		std::cout << "\n---- Third range (copy range2) ----" << std::endl;
// 		std::cout << "shortest span: " << myRange3.shortestSpan() << std::endl;
// 		int longest = myRange3.longestSpan();
// 		std::cout << "longest span: " << longest << std::endl;
// 	}
// 	catch (std::exception& e) { 
// 		std::cout << e.what() << std::endl; 
// 	}
	
// 	return 0;
// }

