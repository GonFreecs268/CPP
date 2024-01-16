/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:22:22 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/16 17:34:32 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <math.h>
#include "Fixed.hpp"

class Point
{
	public:
	
	Point();
	Point(Point const &src);
	Point(float const x, float const y);
	~Point();

	int	tmp;
	
	static bool		bsp(Point const a, Point const b, Point const c, Point const point);
	static float	triangleArea(Point const a, Point const b, Point const c);

	private :

	Point&	operator=(Point const &src);
	Fixed	const	_x;
	Fixed	const	_y;
};

#endif