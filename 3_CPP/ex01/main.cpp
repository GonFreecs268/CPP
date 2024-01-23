/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:48:21 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/22 14:06:04 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main() {
	
    std::cout << _RED _BLINK "WELCOME TO THE SCAVTRAP FUN CHALLENGE!\n\n" _END << std::endl;

    ScavTrap Scavtrap1("Scavtrap1");
    ScavTrap Scavtrap2("Scavtrap2");

    // Round 1
    Scavtrap1.attack("Scavtrap2");
    Scavtrap2.guardGate();

    // Round 2
    Scavtrap2.attack("Scavtrap1");
    Scavtrap1.guardGate();


    std::cout << "\nBattle Results:\n";
    std::cout << Scavtrap1.GetName() << " strikes a pose and says: 'I am the dancing master!'\n";
    std::cout << Scavtrap2.GetName() << " replies: 'Oh really? Watch this!'\n";
    std::cout << Scavtrap2.GetName() << " starts breakdancing, distracting " << Scavtrap1.GetName() << ".\n";
    
    // Additional Fun Rounds
    Scavtrap1.attack("Scavtrap2");
    
    Scavtrap2.attack("Scavtrap1");
    
    std::cout << "\nAfter a series of dance-offs and epic poses, the ScavTraps decide it's a tie!\n";
    std::cout << Scavtrap1.GetName() << "'s Health: " << Scavtrap1.GetHealth() << "\n";
    std::cout << Scavtrap2.GetName() << "'s Health: " << Scavtrap2.GetHealth() << "\n";

    std::cout << "\nThe ScavTraps had a blast and declared themselves the kings of the dance floor!" << std::endl;

    return 0;
}
