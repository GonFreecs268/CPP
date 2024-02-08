/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:18:07 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/08 18:01:35 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/iter.hpp"

int main() {
	
	 std::cout << _SILVER "\t\t\t\t\t TEST OF ITER " _END << std::endl;
    // Définition de deux tableaux : un tableau d'entiers et un tableau de caractères
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    
    // Appel de la fonction iter avec print pour afficher les éléments du tableau d'entiers
    std::cout << _SILVER "Printing intArray:" _END << std::endl;
    iter(intArray, 5, print<int>);
    
    // Appel de la fonction iter avec print pour afficher les éléments du tableau de caractères
    std::cout << _SILVER "Printing charArray:" _END << std::endl;
    iter(charArray, 5, print<char>);
    
    // Test avec un tableau nul (qui va déclencher une exception)
    int* nullArray = NULL;
    std::cout << _SILVER "Printing nullArray:" _END << std::endl;
    iter(nullArray, 5, print<int>); // Cette ligne devrait déclencher une exception

    return (0);
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// int main() {
	
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   ::iter(tab, 5, print<const int>);
//   ::iter(tab2, 5, print<Awesome>);

//   return 0;
// }