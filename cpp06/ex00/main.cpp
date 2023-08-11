/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 07:29:25 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/11 10:48:17 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){
	if(ac != 2)
		return(std::cout << "one argument required" << std::endl, 1);
	ScalarConverter::convert(static_cast<std::string>(av[1]));	
}
