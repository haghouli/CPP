/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 07:33:30 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/11 08:50:57 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include "utiles.hpp"

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter & obj);
		ScalarConverter & operator=(const ScalarConverter & obj);
		~ScalarConverter();
		static void convert(std::string str);
};

#endif
