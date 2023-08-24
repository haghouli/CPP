/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 07:33:16 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/21 10:06:43 by haghouli         ###   ########.fr       */
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

void	display(std::string str) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "flaot: " << str + "f" << std::endl;
	std::cout << "double: " << str << std::endl;	
}

void ScalarConverter::convert(std::string str) {
	if(detect_type(str) == 'c')
	{
		char c = str[0];
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	} else if(detect_type(str) == 'i') {
		int n = atoi(str.c_str());
		if(n > 128 || n < 0 || !isprint(n))
			std::cout << "char: Non displayable"<< std::endl;
		else
			std::cout << "char: " << static_cast<char>(n) << std::endl;

		std::cout << "int: " << n << std::endl;
		std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
	}
	 else if(detect_type(str) == 'f') {
		float n = atof(str.c_str());
		if(isprint(n))
			std::cout << "char: " << static_cast<char>(n) << std::endl;
		else
			std::cout << "char: Non displayable"<< std::endl;
		std::cout << "int: " << static_cast<int>(n) << std::endl;
		std::cout << "float: " << n << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << std::endl;
	}  else if(detect_type(str) == 'd') {
		double n = std::strtod(str.c_str(), NULL);
		if(isprint(n))
			std::cout << "char: "<< static_cast<char>(n) << std::endl;
		else
			std::cout << "char: Non displayable"<< std::endl;
		std::cout << "int: " << static_cast<int>(n) << std::endl;
		std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
		std::cout << "double: " << n << std::endl;
	} else if(str == "nan" || str == "nanf") {
		display("nan");
	} else if(str == "+inf" || str == "+inff") {
		display("+inf");
	} else if(str == "-inf" || str == "-inff")  {
		display("-inf");
	} else
		display("impossible");
}