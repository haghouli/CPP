/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:38:20 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/02 11:55:47 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    if(ac != 2)
        return(std::cout << "Error: could not open file.\n", 1);
    BitcoinExchange b;
    b.setFile(av[1]);
    b.file_data();
    b.parse_file();
    // b.show();
}