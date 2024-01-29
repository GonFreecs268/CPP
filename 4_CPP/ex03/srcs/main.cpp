/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:18:01 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/29 17:12:45 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AMateria.hpp"
#include "../incs/Character.hpp"
#include "../incs/Cure.hpp"
#include "../incs/Ice.hpp"
#include "../incs/MateriaSource.hpp"

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

// int main() {
// {
// 	std::cout << _BOLD << "-----------TEST POOL 1-----------" << _END << std::endl;

// 	std::cout << "\nCreating a MateriaSource src and learning Materia Ice and Materia Cure" << std::endl;
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	std::cout << "\nCreating 2 Characters : Bill and Boule" << std::endl;
// 	Character* bill = new Character("Bill");
// 	Character* boule = new Character("Boule");

// 	std::cout << "\nTrying to create Materia 'lava' and to add it to Bill materias." << std::endl;
// 	AMateria* tmp;
// 	tmp = src->createMateria("lava");
// 	bill->equip(tmp);
// 	std::cout << "\nTrying to create Materia 'ice' and to add it to Bill materias." << std::endl;
// 	tmp = src->createMateria("ice");
// 	bill->equip(tmp);
// 	std::cout << "\nTrying to create Materia 'cure' and to add it to Bill materias." << std::endl;
// 	tmp = src->createMateria("cure");
// 	bill->equip(tmp);

// 	std::cout << "\nBill using his 2 Materias from his materias array [0], then [1], then [8]" << std::endl;
// 	bill->use(0, *boule);
// 	bill->use(1, *boule);
// 	bill->use(8, *boule);

// 	std::cout << "\nCreating new Character Bill2" << std::endl;
// 	Character* bill2 = new Character("Nico");
// 	std::cout << "\nTrying to create Materia 'cure' and to add it to Bill2 materias." << std::endl;
// 	tmp = src->createMateria("cure");
// 	bill2->equip(tmp);
// 	std::cout << "\nTrying to create Materia 'ice' and to add it to Bill2 materias." << std::endl;
// 	tmp = src->createMateria("ice");
// 	bill2->equip(tmp);


// 	std::cout << "\nBill2 using his 2 Materias from his materias array [0], then [1]" << std::endl;
// 	bill2->use(0, *boule);
// 	bill2->use(1, *boule);

// 	std::cout << "\nCopying Bill2 from Bill" << std::endl;
// 	*bill2 = *bill;

// 	std::cout << "\nDeleting Bill" << std::endl;
// 	delete bill;

// 	std::cout << "\nBill2 using his 2 Materias from his materias array [0], then [1]" << std::endl;
// 	bill2->use(0, *boule);
// 	bill2->use(1, *boule);

// 	std::cout << "\nDeleting Bill2 & Boule\n" << std::endl;
// 	delete src;
// 	// delete tmp;
// 	delete bill2;
// 	delete boule;
// 	return (0);
// }
// {
// 	std::cout << _BOLD << "\n-----------TEST POOL 2-----------" << _END << std::endl;

// 	std::cout << "\nCreating a MateriaSource src and learning Materia Ice and Materia Cure" << std::endl;
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	std::cout << "\nCreating Characters : 'me'" << std::endl;
// 	ICharacter* me = new Character("me");

// 	std::cout << "\nTrying to create Materia 'lava' and to add it to me materias." << std::endl;
// 	AMateria* tmp;
// 	tmp = src->createMateria("lava");
// 	me->equip(tmp);
// 	std::cout << "\nTrying to create Materia 'ice' and to add it to me materias." << std::endl;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	std::cout << "\nTrying to create Materia 'cure' and to add it to me materias." << std::endl;
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	std::cout << "\nCreating Characters : 'bob'" << std::endl;
// 	ICharacter* bob = new Character("bob");

// 	std::cout << "\nMe using materias[0] and [1] on bob" << std::endl;
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	std::cout << "\nDeleting bob, me and src" << std::endl;
// 	delete bob;
// 	delete tmp;
// 	delete me;
// 	delete src;

// 	return 0;
// }
// }


// int	main(void)
// {
// 	// Test des construction et destruction des Materias et Materia Source
// 	std::cout << "Test des construction et destruction des Materias et Materia Source" 
// 	<< std::endl << std::endl;
// 	IMateriaSource* src = new MateriaSource();
	
// 	AMateria *ice_1 = new Ice();
// 	AMateria *ice_2 = new Ice(*((Ice *)ice_1));
// 	AMateria *cure_1 = new Cure();
// 	AMateria *cure_2 = cure_1->clone();
		
// 	src->learnMateria(ice_1);
// 	src->learnMateria(cure_1);

// 	AMateria *ice_3 = src->createMateria("ice");
// 	std::cout << "type de ice_3: "<< ice_3->getType() << std::endl;

// 	AMateria *cure_3 = src->createMateria("cure");
// 	std::cout << "type de cure_2: "<< cure_2->getType() << std::endl;

// 	delete ice_2;
// 	delete ice_3;
// 	delete cure_2;
// 	delete cure_3;
	
// 	// Test de la partie Character
// 	std::cout << std::endl << std::endl;
// 	std::cout << "Test de la partie Character" << std::endl << std::endl;
// 	Character character_1("Juv");
// 	Character character_2("Tiff");
// 	Character character_3("Nico");
	
// 	character_1.equip(src->createMateria("ice"));
// 	character_1.equip(src->createMateria("cure"));

// 	character_1.use(0, character_2);
// 	character_1.use(1, character_2);
// 	character_1.use(2, character_2);
	
// 	std::cout << "		character_3 = character_1; --> Test de la copie profonde" << std::endl;
// 	character_3 = character_1;
// 	character_3.use(0, character_2);
// 	character_3.use(1, character_2);
// 	character_3.use(2, character_2);
	
// 	std::cout << "		character_3 = character_2; -->ca va supprimer tous les equip" << std::endl;
// 	character_3 = character_2;
// 	character_3.use(0, character_2);
// 	character_3.use(1, character_2);
// 	character_3.use(2, character_2);
	
	
// 	AMateria *follen_materia;
// 	std::cout << "		Juv (character 1) fait tomber son ice (possition 1)" << std::endl;
// 	follen_materia = character_1.getAMateria(0);
// 	if (follen_materia)
// 		character_1.unequip(0);
	
// 	std::cout << "		Tiff rammasse l'ice tombe et la prend" << std::endl;
// 	character_2.equip(follen_materia);
// 	character_2.use(0, character_1);
// 	character_2.use(1, character_1);

// 	std::cout << "		Test de la creation par recopie" << std::endl;
// 	Character character_4(character_1);
// 	character_4.use(0, character_2);
// 	character_4.use(1, character_2);
// 	character_4.use(2, character_2);
// 	character_4.use(3, character_2);
	
// 	delete src;
// 	return (0);
// }

int		rollDice(void) {
	int value = 7;
	while (value > 6) 
		value = 1 + std::rand() / ((RAND_MAX + 1u) / 6);
	return value;
}

void	initMage(ICharacter* Mage) {

	Mage->equip(new Ice());
	Mage->equip(new Cure());
}

bool	continueFight(ICharacter* Mage1, ICharacter* Mage2) {
	
	if (Mage1->getHealth() <= 0 || Mage2->getHealth() <= 0) {
		return false;
	}
	if (Mage1->getMana() <= 0 && Mage2->getMana() <= 0) {
		return false;
	}
	return true;
}

void	criticalFailure(ICharacter* Mage) {

	int	critDice = rollDice();
	switch (critDice) {
		case 1:
			std::cout << _BOLD << Mage->getName() << " rolled 1, " _RED "critical failure! " _REV "Lost all inventory!" _RESET << std::endl;
			for (int i = 0; i < Character::MAX_ITEM; i++) {
				Mage->destroy(i);
			}
			break;
		case 2:
			std::cout << _BOLD << Mage->getName() << " rolled 2!" _RED " Received 10Dmg!" _RESET << std::endl;
			Mage->receiveDmg(10);
			break;
		case 3:
			std::cout << _BOLD << Mage->getName() << " rolled 3!" _BLUE " Received mana debuff!" _RESET << std::endl;
			Mage->manaNerf();
			break;
		case 4:
			std::cout << _BOLD << Mage->getName() << " rolled 4! ";
			if (Mage->getMateriaIdx("cure") == -1) {
				std::cout << _GREYER " Nothing to be done!" _RESET << std::endl;
				break ;
			}
			Mage->destroy(Mage->getMateriaIdx("cure"));
			std::cout << "Lost one cure materia!" << std::endl;
			break;
		case 5:
			std::cout << _BOLD << Mage->getName() << " rolled 5! ";
			if (Mage->getMateriaIdx("ice") == -1) {
				std::cout << _GREYER " Nothing to be done!" _RESET << std::endl;
				break ;
			}
			Mage->destroy(Mage->getMateriaIdx("ice"));
			std::cout << "Lost one ice materia!" << std::endl;
			break;
		case 6:
			std::cout << _BOLD << Mage->getName() << " rolled 6, " _PURPLE "critical success! " _REV "Got out of a tight spot!" _RESET << std::endl;
			break;
	}
}

void	learnMateria(ICharacter* Mage, IMateriaSource* SpellBook) {

	int	critDice = rollDice();
	switch (critDice) {
		case 1:
			std::cout << _BOLD << Mage->getName() << " rolled 1, " _RED "critical failure! " _REV "Fail to learn materia!" _RESET << std::endl;
			break;
		case 2:
		case 3:
			std::cout << _BOLD << Mage->getName() << " rolled " << critDice << "! ";
			if (SpellBook->isBookFull()) {
				std::cout << _GREYER " Nothing to be done!" _RESET << std::endl;
				break ;
			}
			std::cout << std::endl;
			SpellBook->learnMateria(new Cure());
			break;
		case 4:
		case 5:
			std::cout << _BOLD << Mage->getName() << " rolled " << critDice << "! ";
			if (SpellBook->isBookFull()) {
				std::cout << _GREYER " Nothing to be done!" _RESET << std::endl;
				break ;
			}
			std::cout << std::endl;
			SpellBook->learnMateria(new Ice());
			break;
		case 6:
			std::cout << _BOLD << Mage->getName() << " rolled 6, " _PURPLE "critical success! " _RESET << std::endl;
			if (SpellBook->isBookFull()) {
				std::cout << _GREYER " Nothing to be done!" _RESET << std::endl;
				break ;
			}
			SpellBook->learnMateria(new Ice());
			if (SpellBook->isBookFull()) {
				break ;
			}
			SpellBook->learnMateria(new Cure());
			break;
	}
}

void	createMateria(ICharacter* Mage, IMateriaSource* SpellBook) {

	int	critDice = rollDice();
	switch (critDice) {
		case 1:
			std::cout << _BOLD << Mage->getName() << " rolled 1, " _RED "critical failure!" _RESET << std::endl;
			break;
		case 2:
		case 3:
			std::cout << _BOLD << Mage->getName() << " rolled " << critDice << "! ";
			if (Mage->isInventoryFull()) {
				std::cout << _GREYER " Nothing to be done!" _RESET << std::endl;
				break ;
			}
			Mage->equip(SpellBook->createMateria("cure"));
			break;
		case 4:
		case 5:
			std::cout << _BOLD << Mage->getName() << " rolled " << critDice << "! ";
			if (Mage->isInventoryFull()) {
				std::cout << _GREYER " Nothing to be done!" _RESET << std::endl;
				break ;
			}
			Mage->equip(SpellBook->createMateria("ice"));
			break;
		case 6:
			std::cout << _BOLD << Mage->getName() << " rolled 6, " _PURPLE "critical success! " << std::endl;
			if (Mage->isInventoryFull()) {
				std::cout << _GREYER " Nothing to be done!" _RESET << std::endl;
				break ;
			}
			Mage->equip(SpellBook->createMateria("ice"));
			if (Mage->isInventoryFull()) {
				break ;
			}
			Mage->equip(SpellBook->createMateria("cure"));
			break;
	}
}

void	criticalSuccess(ICharacter* Mage1, ICharacter* Mage2) {

	int	critDice = rollDice();
	switch (critDice) {
		case 1:
			std::cout << _BOLD << Mage1->getName() << " rolled 1, " _RED "critical failure! " _REV "The tide has turned!" _RESET << std::endl;
			break ;
		case 2:
			std::cout << _BOLD << Mage1->getName() << " rolled 2! Received free cure!" << std::endl;
			if (Mage1->isInventoryFull()) {
				std::cout << _GREYER " Nothing to be done!" _RESET << std::endl;
				break ;
			}
			Mage1->equip(new Cure());
			break ;
		case 3:
			std::cout << _BOLD << Mage1->getName() << " rolled 3! Received free ice!" << std::endl;
			if (Mage1->isInventoryFull()) {
				std::cout << _GREYER " Nothing to be done!" _RESET << std::endl;
				break ;
			}
			Mage1->equip(new Ice());
			break ;
		case 4:
			std::cout << _BOLD << Mage1->getName() << " rolled 4! Received mana buff!" << std::endl;
			Mage1->manaBuff();
			break ;
		case 5:
			std::cout << _BOLD << Mage1->getName() << " rolled 5! ";
			if (Mage1->getMateriaIdx("ice") == -1) {
				std::cout << _BOLD _GREYER "No ice materia in inventory!" _RESET << std::endl;
				break ;
			}
			Mage1->use(Mage1->getMateriaIdx("ice"), *Mage2);
			Mage2->receiveDmg(21);
			std::cout << _BOLD _ORANGE << Mage2->getName() << ": received 42Dmg!" _RESET << std::endl;
			break ;
		case 6:
			std::cout << _BOLD << Mage1->getName() << _PURPLE " rolled 6, critical success! ";
			if (Mage1->getMateriaIdx("ice") == -1) {
				std::cout << _BOLD _GREYER "No ice materia in inventory!" _RESET << std::endl;
				break ;
			}
			Mage1->use(Mage1->getMateriaIdx("ice"), *Mage2);
			Mage2->receiveDmg(42);
			std::cout << _BOLD _ORANGE << Mage2->getName() << ": received 42Dmg!" _RESET << std::endl;
			break ;
	}
}

void	rollActionDice(ICharacter* Mage1, IMateriaSource* SpellBook1, ICharacter* Mage2) {
	if (Mage1->getMana() <= 0) {
		return ;
	}
	int actionDice = rollDice();
	int dmgDice;
	switch (actionDice) {
		case 1:
			std::cout << _BOLD << Mage1->getName() << " rolled 1, " _RED "critical failure! " _RESET;
			criticalFailure(Mage1);
			break ;
		case 2:
			std::cout << _BOLD << Mage1->getName() << " rolled 2! " _RESET;
			learnMateria(Mage1, SpellBook1);
			break ;
		case 3:
			std::cout << _BOLD << Mage1->getName() << " rolled 3! " _RESET;
			createMateria(Mage1, SpellBook1);
			break ;
		case 4:
			std::cout << _BOLD << Mage1->getName() << " rolled 4! ";
			if (Mage1->getMateriaIdx("cure") == -1) {
				std::cout << _GREYER "No cure materia in inventory!" _RESET << std::endl;
				break ;
			}
			Mage1->use(Mage1->getMateriaIdx("cure"), *Mage1);
			dmgDice = rollDice();
			Mage1->receiveHeal(2 * dmgDice);
			std::cout << _BOLD _ORANGE << Mage1->getName() << " healed " << 2 * dmgDice << "Pts!" _RESET << std::endl;
			break ;
		case 5:
			std::cout << _BOLD << Mage1->getName() << " rolled 5! ";
			if (Mage1->getMateriaIdx("ice") == -1) {
				std::cout << _GREYER "No ice materia in inventory!" _RESET << std::endl;
				break ;
			}
			Mage1->use(Mage1->getMateriaIdx("ice"), *Mage1);
			dmgDice = rollDice();
			Mage2->receiveDmg(2 * dmgDice);
			std::cout << _BOLD _ORANGE << Mage2->getName() << ": received " << 2 * dmgDice << "Dmg!" _RESET << std::endl;
			break ;
		case 6:
			std::cout << _BOLD << Mage1->getName() << " rolled 6, " _PURPLE "critical success! " _RESET;
			criticalSuccess(Mage1, Mage2);
			break ;
	}
}

int	main(void) {

	std::srand(std::time(0)); // use current time as seed for random generator
	ICharacter*	Mage1 = new Character("Mage1");
	ICharacter*	Mage2 = new Character("Mage2");
	initMage(Mage1);
	initMage(Mage2);
	IMateriaSource* SpellBook1 = new MateriaSource();
	IMateriaSource* SpellBook2 = new MateriaSource();
	int turnCount = 1;
	std::cout << std::endl;
	std::cout << _BOLD _REV "*** Battle Mage Simulation ***" _RESET << std::endl;
	while (continueFight(Mage1, Mage2)) {
		std::cout << _BOLD "\n*** TURN - " << turnCount << " ***" _RESET << std::endl; 
		if (Mage1->getHealth() > 0) {
			rollActionDice(Mage1, SpellBook1, Mage2);
		}
    std::cout << _BOLD "***   ***   ***" _RESET << std::endl;
		if (Mage2->getHealth() > 0) {
			rollActionDice(Mage2, SpellBook2, Mage1);
		}
		turnCount++;
		std::cout << _BOLD "*** END TURN ***" _RESET << std::endl; 
		std::cout << _LAGOON << Mage1->getName() << ": health=" << Mage1->getHealth() << " | mana=" << Mage1->getMana() << _RESET << std::endl;
		std::cout << _LAGOON << Mage2->getName() << ": health=" << Mage2->getHealth() << " | mana=" << Mage2->getMana() << _RESET << std::endl;
		std::cout << std::endl;
	}
	delete Mage1;
	delete Mage2;
	delete SpellBook1;
	delete SpellBook2;
	std::cout << std::endl;
	std::cout << _BOLD _REV "*** Battle End ***" _RESET << std::endl;
	std::cout << std::endl;
	return 0;
}

// int main(void) {
// 	std::cout << std::endl;
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	std::cout << std::endl;
// 	MateriaSource src2;
// 	MateriaSource src5 = MateriaSource(src2);
//
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	delete tmp;
// 	tmp = src5.createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	std::cout << std::endl;
//
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	std::cout << std::endl;
//
// 	delete bob;
// 	delete me;
// 	delete src;
// 	std::cout << std::endl;
// 	return 0;
// }



