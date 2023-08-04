/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:46:19 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/31 09:35:55 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain * brain;
	public:
		Dog();
		Dog(const Dog & obj);
		Dog & operator=(const Dog & obj);
		~Dog();

		void makeSound() const;
};

#endif
