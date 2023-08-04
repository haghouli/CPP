/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:21:42 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/28 07:44:33 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal & obj);
		const Animal & operator=(const Animal & obj); 
		virtual ~Animal();

		std::string getType() const;

		virtual void makeSound() const = 0;
};

#endif
 