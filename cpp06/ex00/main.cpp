/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 07:29:25 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/21 09:25:19 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){
	if(ac != 2)
		return(std::cout << "one argument required" << std::endl, 1);
	try
	{
		ScalarConverter::convert(static_cast<std::string>(av[1]));
	}
	catch(const std::exception& e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "flaot: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	
}
