/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:20:41 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/17 16:34:11 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <tgmath.h>

float Point::triangleArea(Point const a, Point const b, Point const c)
{
    float area = fabs((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
						b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
						c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0f);
    return (area);
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