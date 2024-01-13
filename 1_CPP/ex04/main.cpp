/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:37:28 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/13 17:57:27 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <cstdlib>


// Fonction pour remplacer toutes les occurrences d'une chaîne par une autre dans une chaîne
void customReplace(std::string &str, const std::string &search, const std::string &replace) {
    size_t pos = 0;
    while ((pos = str.find(search, pos)) != std::string::npos) {
        str = str.substr(0, pos) + replace + str.substr(pos + search.length());
        pos += replace.length();
    }
}

int main(int argc, char **argv) {
    // Vérification du nombre d'arguments
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <file> <search> <replace>" << std::endl;
        return 1;
    }

    // Récupération des arguments de la ligne de commande
    std::string fileName = argv[1];
    std::string searchStr = argv[2];
    std::string replaceStr = argv[3];

    // Ouverture du fichier en lecture
    std::ifstream inputFile(fileName.c_str()); // Utilisation de c_str() pour obtenir un const char*
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open input file" << std::endl;
        return 1;
    }

    // Lecture du contenu du fichier dans une chaîne
    std::ostringstream buffer;
    buffer << inputFile.rdbuf();
    std::string content = buffer.str();

    // Fermeture du fichier d'entrée
    inputFile.close();

    // Remplacement de toutes les occurrences de la chaîne
    customReplace(content, searchStr, replaceStr);

    // Ouverture du fichier de sortie en écriture
    std::ofstream outputFile((fileName + ".replace").c_str()); // Utilisation de c_str() pour obtenir un const char*
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open output file" << std::endl;
        return 1;
    }

    // Écriture du contenu modifié dans le fichier de sortie
    outputFile << content;

    // Fermeture du fichier de sortie
    outputFile.close();

    std::cout << "Replacement completed. Output written to " << fileName + ".replace" << std::endl;

    return 0;
}
