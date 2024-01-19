/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:48:21 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/19 15:58:08 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Luffy("Monkey D. Luffy");
    ClapTrap Pikachu("Pikachu");
    ClapTrap Zoro("Roronoa Zoro");

    Luffy.SetAttack(5);
    Pikachu.SetAttack(3);
    Zoro.SetAttack(4);

    std::cout << _RED _BLINK "              WELCOME TO THE MANGA BATTLE ARENA!\n\n" _END << std::endl;

    // Round 1
    Luffy.attack("Pikachu");
    Pikachu.takeDamage(5);
	std::cout << Luffy.GetName() << "'s Health: " << Luffy.GetHealth() << "\n" << std::endl;
    std::cout << Pikachu.GetName() << "'s Health: " << Pikachu.GetHealth() << "\n" << std::endl;
    std::cout << Zoro.GetName() << "'s Health: " << Zoro.GetHealth() << "\n" << std::endl;

	
    // Round 2
    Zoro.attack("Monkey D. Luffy");
    Luffy.takeDamage(4);
	std::cout << Luffy.GetName() << "'s Health: " << Luffy.GetHealth() << "\n" << std::endl;
    std::cout << Pikachu.GetName() << "'s Health: " << Pikachu.GetHealth() << "\n" << std::endl;
    std::cout << Zoro.GetName() << "'s Health: " << Zoro.GetHealth() << "\n" << std::endl;


    // Round 3
    Pikachu.attack("Team Rocket Grunt");
    Zoro.takeDamage(3);
	std::cout << Luffy.GetName() << "'s Health: " << Luffy.GetHealth() << "\n" << std::endl;
    std::cout << Pikachu.GetName() << "'s Health: " << Pikachu.GetHealth() << "\n" << std::endl;
    std::cout << Zoro.GetName() << "'s Health: " << Zoro.GetHealth() << "\n" << std::endl;


	// Round 4
	Zoro.attack("Pikachu");
	Pikachu.takeDamage(4);
	Luffy.attack("Pikachu");
	Pikachu.takeDamage(5);
	Pikachu.attack("Luffy");
	std::cout << Luffy.GetName() << "'s Health: " << Luffy.GetHealth() << "\n" << std::endl;
    std::cout << Pikachu.GetName() << "'s Health: " << Pikachu.GetHealth() << "\n" << std::endl;
    std::cout << Zoro.GetName() << "'s Health: " << Zoro.GetHealth() << "\n" << std::endl;


    // Healing Rounds
    Luffy.beRepaired(4);
    Pikachu.beRepaired(3);
    Zoro.beRepaired(1);

    std::cout << "\nBattle Results:\n"<< std::endl;
    std::cout << Luffy.GetName() << "'s Health: " << Luffy.GetHealth() << "\n" << std::endl;
    std::cout << Pikachu.GetName() << "'s Health: " << Pikachu.GetHealth() << "\n" << std::endl;
    std::cout << Zoro.GetName() << "'s Health: " << Zoro.GetHealth() << "\n" << std::endl;

    std::cout << "\nThe manga heroes fought valiantly and recovered from their injuries!" << std::endl;

    return (0);
}
