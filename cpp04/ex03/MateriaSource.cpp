/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 08:01:09 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/01 10:21:25 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : learned_materia_count(0) { }

MateriaSource::MateriaSource(const MateriaSource & obj) {
	*this = obj;
};

MateriaSource & MateriaSource::operator=(const MateriaSource & obj) {
	if(this == &obj)
		return *this;
	
	for(int i = 0; i < learned_materia_count; i++)
		delete [] learned_materia[i];
	
	for(int i = 0; i < learned_materia_count; i++) {
		AMateria *m;
		if(obj.learned_materia[i]->getType().compare("cure"))
			m = new Cure();
		else
			m = new Ice();
		*m = *(obj.learned_materia[i]);
		learned_materia[i] = m;
	}
	return *this;
};

MateriaSource::~MateriaSource() {
	for(int i = 0; i < learned_materia_count; i++) {
		delete learned_materia[i];
	}
};

void MateriaSource::learnMateria(AMateria* m) {
	if(learned_materia_count <= 3) {
		AMateria *tmp;
		if(m->getType().compare("cure"))
			tmp = new Cure();
		else
			tmp = new Ice();
		*tmp = *m;
		learned_materia[learned_materia_count++] = tmp;
	}
};

AMateria* MateriaSource::createMateria(std::string const & type) {
	for(int i = 0; i < learned_materia_count; i++) {
		if(learned_materia[i]->getType().compare(type)) {
			AMateria *m;
			if(learned_materia[i]->getType().compare("cure"))
				m = new Cure();
			else
				m = new Ice();
			*m = *learned_materia[i];
			return m;
		}
	}
	std::cout << "unknown materia type" << std::endl;
	return 0;
}

