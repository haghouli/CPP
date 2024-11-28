/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:11:15 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/31 09:34:28 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_H
#define CAT_H

#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain * brain;
	public:
		Cat();
		Cat(const Cat & obj);
		Cat & operator=(const Cat & obj);
		~Cat();
		void makeSound() const;
};

#endif
