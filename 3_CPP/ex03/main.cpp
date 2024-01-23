/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:48:21 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/23 16:55:51 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    std::cout << _RED _BLINK "WELCOME TO THE ROBOT BATTLE ARENA!\n\n" _END << std::endl;

    // Create instances of different traps
    // ClapTrap clap("ClapTrap");
    // ScavTrap scav("ScavTrap");
    // FragTrap frag("FragTrap");
    DiamondTrap diamond("DiamondTrap");

    // Perform actions
    // clap.attack("Target 1");
    // scav.attack("Target 2");
    // frag.attack("Target 3");
    diamond.attack("Target 4");

    diamond.whoAmI(); // Test the whoamI function

    // Display final status
    // std::cout << "\nFinal Status:\n" << std::endl;
    // std::cout << "ClapTrap's Health: " << clap.GetHealth() << "\n";
    // std::cout << "ScavTrap's Health: " << scav.GetHealth() << "\n";
    // std::cout << "FragTrap's Health: " << frag.GetHealth() << "\n";
    // std::cout << "DiamondTrap's Health: " << diamond.GetHealth() << "\n";

    return 0;
}
