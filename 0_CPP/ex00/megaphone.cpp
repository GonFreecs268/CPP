/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:02:12 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/10 15:02:13 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// inclusion pour operation entree?sortie standard
#include <iostream>
// inclusion pour travailler avec des chaines de caracteres
#include <string>
// inclusion pour les fonctions de caracteres
#include <cctype>

int	main(int ac, char **av) {
	if (ac == 1) {
		std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	// Parcourir tous les arguments de la ligne de commande
	for (int i = 1; i < ac; ++i) {
		// Stocker chaque element dans une chaine de caractere
		std::string arg(av[i]);
		
		// Convertir tous les caracteres en MAJ
		for (size_t j = 0; j < arg.length(); ++j) {
			arg[j] = std::toupper(arg[j]);
		}
		
		// Afficher l'elent converti en MAJ s
		std::cout << arg << ' ';
	}
	std::cout << std::endl;
	return (0);
}