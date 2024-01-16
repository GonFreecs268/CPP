/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:22:07 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/16 17:35:35 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {
	
	std::cout << "Default Constructor Called" << std::endl;
	return ;
}

Point::Point(Point const &src) : _x(src._x), y(srx._y) {

	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;
	return ;
}

Point::Point(float const x, float const y) : _x(x), _y(y) {
	
	std::cout << "Float Constructor Called" << std::endl;
	return;
}

Point::Point(void) {
	
	std::cout << "Destructor Called" << std::endl;
	return ;
}

Point&	Point::operator=(const Point &src) {
	
	if (this != &src)
		this->tmp = src.tmp;
	return (*this);
}
