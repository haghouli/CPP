/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:59:26 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/01 08:31:31 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
    private:
		std::string name;
        AMateria    *equiped_materia[4];
        int         equiped_materia_cout;
    
    public:
        Character();
        Character(const std::string & name);
        Character(const Character & obj);
        Character & operator=(const Character & obj);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        void showLeranedMaterias();
};

#endif
