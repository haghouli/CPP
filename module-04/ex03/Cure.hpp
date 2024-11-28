/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:31:01 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/30 11:39:16 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure & obj);
        Cure & operator=(const Cure & obj);
        ~Cure();

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
