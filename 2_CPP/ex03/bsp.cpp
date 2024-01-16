/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:20:41 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/16 17:21:49 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float	Point::triangleArea(Point const a, Point const b, Point const c)
{
	float ab = (a._x.operator*(b._y).toFloat() - b._x.operator*(a._y).toFloat());
	float bc = (b._x.operator*(c._y).toFloat() - c._x.operator*(b._y).toFloat());
	float ac = (c._x.operator*(a._y).toFloat() - a._x.operator*(c._y).toFloat());
	float haha = ab + bc + ac;
	if (haha < 0)
		haha *= -0.5f;
	else
		haha *= 0.5f;
	return haha ;
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
	float fullArea = triangleArea(a, b, c);
	float firstArea = triangleArea(point, a, b);
	float secondArea = triangleArea(point, b, c);
	float thirdArea = triangleArea(point, a, c);

	float ff = firstArea / fullArea;
	float sf = secondArea / fullArea;
	float tf = thirdArea / fullArea;
	return (ff > 0 && sf > 0 && tf > 0 && ff < 1 && sf < 1 && tf < 1) ? true : false ;
}