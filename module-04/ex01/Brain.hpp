/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:02:44 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/27 12:40:59 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include "Animal.hpp"

class Brain
{
	public:
		std::string ideas[100];
		Brain();
		~Brain();
		Brain(const Brain & obj);
		const Brain & operator=(const Brain & obj);
};

#endif
