/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:51:19 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/06 09:03:40 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout <<  "[DEBUG]" << std::endl;
    std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. " << std::endl;
    std::cout <<  "I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout <<  "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. " << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout <<  "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout <<  "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Harl::*f[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for(int i = 0; i < 4; i++) {
		if(!arr[i].compare(level))
			(this->*f[i])();
	}
}

