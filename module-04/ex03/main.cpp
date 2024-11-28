/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 08:07:20 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/07 11:32:53 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{ 	
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);
	
		delete bob;
		delete me;
		delete src;
	}

	std::cout << "*****************************************" << std::endl;
	
	{
		AMateria *m1 = new Ice();
		AMateria *m2 = new Cure();

		ICharacter *c1 = new Character("Hicham");
		c1->equip(m1);
		c1->equip(m2);

		ICharacter *c2 = new Character("kkkkkk");
		*c2 = *c1;

		c1->use(0, *c1);

		delete c1;
		delete c2;
		delete m1;
		delete m2;
	}

	std::cout << "*****************************************" << std::endl;
	{
		AMateria *materia1 = new Ice();
		AMateria *materia2 = new Cure();
		AMateria *materia3 = new Ice();
		AMateria *materia4 = new Cure();
		AMateria *materia5 = new Ice();

		ICharacter *c = new Character("Hicham");
		ICharacter *target = new Character("BotTarget");

		c->equip(materia1);
		c->equip(materia2);
		c->equip(materia3);
		c->equip(materia4);
		c->equip(materia5);

		for(int i = 0; i < 4; i++)
			c->use(i, *target);

		delete c;
		delete target;
		delete materia1;
		delete materia2;
		delete materia3;
		delete materia4;
		delete materia5;
	}
	std::cout << "*****************************************" << std::endl;

	{
		ICharacter *player1 = new Character("hicham");
		ICharacter *botTarget = new Character("botTarget");

		AMateria *materia6 = new Ice();
		AMateria *materia7 = new Cure();
		AMateria *materia8 = new Ice();
		AMateria *materia9 = new Cure();
		AMateria *materia10 = new Ice();
		
		player1->equip(materia6);
		player1->equip(materia7);
		player1->equip(materia8);
		player1->equip(materia9);
		player1->equip(materia10);

		for(int i = 0; i < 4; i++) {
			player1->use(i, *botTarget);
		}
		
		player1->unequip(0);
		player1->unequip(1);
		player1->unequip(2);
		player1->unequip(3);

		
		player1->equip(materia10);
		player1->equip(materia8);

		for(int i = 0; i < 4; i++) {
			player1->use(i, *botTarget);
		}

		delete materia6;
		delete materia7;
		delete materia8;
		delete materia9;
		delete materia10;
		delete player1;
		delete botTarget;
	}

	return 0;
}
