/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:33 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/17 16:21:06 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

void printPoint(const char* name, const Point& p) {
	
    std::cout << "\t\t" << name << "(" << p.getX().toFloat() << "," << p.getY().toFloat() << ")\n";
}

int main() {

    Point a(2.0f, 4.0f);
    Point b(5.0f, 7.0f);
    Point c(7.0f, 3.0f);

    std::cout << "\nOur triangle has the following coordinates:\n" << std::endl;
    printPoint("A", a);
    printPoint("B", b);
    printPoint("C", c);

    Point point(5.0f, 5.0f);
    std::cout << "\nIs the point P(5,5) inside this triangle ? ";
    std::cout << (Point::bsp(a, b, c, point) ? "Yes" : "No") << "\n";

    Point qPoint(1, 2);
    std::cout << "\nIs the point Q(1,2) inside this triangle ? ";
    std::cout << (Point::bsp(a, b, c, qPoint) ? "Yes" : "No") << "\n";

    Point aBis(2.0f, 4.0f);
    std::cout << "\nIs the point aBis(2,4) inside this triangle ? ";
    std::cout << (Point::bsp(a, b, c, aBis) ? "Yes" : "No") << "\n";

    Point last(6, 4);
    std::cout << "\nIs the last_point(6,4) inside this triangle ? ";
    std::cout << (Point::bsp(a, b, c, last) ? "Yes" : "No") << "\n";

    return (0);
}
