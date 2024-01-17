/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:33 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/17 16:43:59 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
Fixed a;
Fixed b( a );
Fixed c;
c = b;

std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;

return (0);
}

// int main( void ) {
	
// 	Fixed a;
// 	Fixed b( a );
// 	Fixed c;
// 	c = b;
	
// 	std::cout << "\nValue in a is : " << a.getRawBits() << std::endl;
// 	std::cout << "Value in b is : " << b.getRawBits() << std::endl;
// 	std::cout << "Value in c is : " << c.getRawBits() << std::endl;
// 	b.setRawBits(8);
// 	std::cout << "Value in b is now : " << b.getRawBits() << std::endl;
// 	return 0;
// }