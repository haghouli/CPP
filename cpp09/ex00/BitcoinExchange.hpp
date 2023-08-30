/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 07:49:20 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/30 15:31:21 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>

class BitcoinExchange {

    private:
        std::fstream                        file;
        std::fstream                        data_file;
        std::map<std::string, std::string>  data;
        std::string get_date(std::string s);
        std::string get_value(std::string s);


    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange & obj);
        BitcoinExchange & operator=(const BitcoinExchange & obj);
        ~BitcoinExchange();

        bool    print_error(bool, const char * msg);

        void    file_data();

        void    setFile(char * av);

        bool    parse_file();

        void    show();

};

bool    is_number(std::string s);
bool    isFloat(std::string s);

#endif 