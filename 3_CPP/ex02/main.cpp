/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:48:21 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/22 15:29:36 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    std::cout << _RED _BLINK "                WELCOME TO THE FRAGTRAP FUN FEST!\n\n" _END << std::endl;

    FragTrap fragtrap1("FragTrap1");
    FragTrap fragtrap2("FragTrap2");

    // Round 1
    fragtrap1.attack("FragTrap2");
    fragtrap2.takeDamage(fragtrap1.GetAttack());
    fragtrap2.highFivesGuys();

    // Round 2
    fragtrap2.attack("FragTrap1");
    fragtrap1.takeDamage(fragtrap2.GetAttack());
    fragtrap1.highFivesGuys();


    std::cout << "\nBattle Results:\n";
    std::cout << fragtrap1.GetName() << " says: 'Let's party, amigo!'\n";
    std::cout << fragtrap2.GetName() << " replies: 'Hell yeah! High five!'\n";
    
    // Additional Fun Rounds
    fragtrap1.attack("FragTrap2");
    fragtrap2.takeDamage(fragtrap1.GetAttack());
    
    fragtrap2.attack("FragTrap1");
    fragtrap1.takeDamage(fragtrap2.GetAttack());

	fragtrap2.attack("FragTrap1");
    fragtrap1.takeDamage(fragtrap2.GetAttack());

	fragtrap2.attack("FragTrap1");
    fragtrap1.takeDamage(fragtrap2.GetAttack());

    std::cout << "\nAfter a series of high fives and explosive attacks, the FragTraps decide it's time to dance!\n";
    std::cout << fragtrap1.GetName() << "'s Health: " << fragtrap1.GetHealth() << "\n";
    std::cout << fragtrap2.GetName() << "'s Health: " << fragtrap2.GetHealth() << "\n";

    std::cout << "\nThe FragTraps rocked the party and celebrated their friendship!" << std::endl;

    return 0;
}
