/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:23:23 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/13 17:10:43 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
	Weapon	Zanpakuto = Weapon("Zangestu");
	
	HumanA	Ichigo("Ichigo", Zanpakuto);
	Ichigo.attack();
	Zanpakuto.setType("Mugetsu");
	Ichigo.attack();
	
	Weapon Bankai = Weapon("Senbonzakura");
	HumanB	Byakuya("Byakuya");
	Byakuya.attack();
	Byakuya.setWeapon(&Bankai);
	Byakuya.attack();
	Bankai.setType("Senbonzakura Kageyoshi");
	Byakuya.attack();
	Byakuya.setWeapon(NULL);
	Byakuya.attack();
	return (0);
}