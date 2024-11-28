/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 07:49:20 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/30 09:05:16 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>
#include <climits>
#include <iomanip>

class BitcoinExchange {

    private:
        std::fstream                        data_file;
        std::fstream                        file;
        std::map<std::string, std::string>  data;

        BitcoinExchange(const BitcoinExchange & obj);
        BitcoinExchange & operator=(const BitcoinExchange & obj);

        std::string get_date(std::string s);
        std::string get_value(std::string s);
        std::string print_error(std::string s);
        std::string get_current_date();

    public:
        BitcoinExchange();
        ~BitcoinExchange();

        void    file_data();
        void    setFile(char * av);
        void    parse_file();

};

bool    is_number(std::string s);
bool    isFloat(std::string s);

#endif 