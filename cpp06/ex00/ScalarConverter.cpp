/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 07:33:16 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/11 11:00:22 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() { };

ScalarConverter::ScalarConverter(const ScalarConverter & obj) {
	*this = obj;
};

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & obj) { 
	(void)obj;
	return *this;
};

ScalarConverter::~ScalarConverter() {
	
};

void ScalarConverter::convert(std::string str) {
	std::cout << "char: ";
	get_char(str);
	std::cout << std::endl;

	std::cout << "int: ";
	get_int(str);
	std::cout << std::endl;

	std::cout << "float: ";
	get_float(str);
	std::cout << std::endl;
}