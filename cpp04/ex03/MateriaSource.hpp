/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 07:55:34 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/31 10:20:49 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public  IMateriaSource
{
	private:
		AMateria *learned_materia[4];
		int	learned_materia_count;
	
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & obj);
		MateriaSource & operator=(const MateriaSource & obj);
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		
};

#endif
