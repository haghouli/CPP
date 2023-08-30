/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 07:49:22 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/30 16:16:38 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    data_file.open("data.csv");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & obj) {
    (void)obj;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & obj) {
    (void)obj;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {

}

void    BitcoinExchange::setFile(char * av) {
    file.open(av);
    if(!file) {
        perror("Error: ");
        exit(1);
    }
}

bool    BitcoinExchange::print_error(bool b, const char * msg) {
    std::cout << msg << std::endl;
    return b;
}

std::string BitcoinExchange::get_date(std::string s) {
    if(s[4] != '-' || s[7] != '-')
        return "";
    std::string year = s.substr(0, 4);
    std::string month = s.substr(5, 2);
    std::string day = s.substr(8, 2);
    if(!is_number(year) || !is_number(month) || !is_number(day))
        return "";
    if(year < "2009" || year > "2022")
        return "";
    if(month < "01" || month > "12")
        return "";
    if(day < "01" || day > "31")
        return "";
    return s;
}

void    BitcoinExchange::file_data() {
    std::string s;
    getline(data_file, s);
    while (1)
    {
        s.clear();
        getline(data_file, s);
        if(s.empty())
            break;
        std::string date = s.substr(0, 10);
        std::string value = s.substr(11);
        data[date] = value;
    }
}

std::string BitcoinExchange::get_value(std::string s) {
    if(s[0] == '-')
        
    if(!is_number(s)) {
        if(!isFloat(s))
            return "";
    }
    if(s > "1000")
        return "";
    return s;
}

void    BitcoinExchange::show() {
    std::map<std::string, std::string>::iterator it = data.begin();
    for(; it != data.end(); it++)
        std::cout << it->first <<  " -> " << it->second << std::endl;
}

bool    BitcoinExchange::parse_file() {
    
    std::string str;
    getline(file, str);

    if(str != "date | value")
        return print_error(false, "Invalid header");
    while (1)
    {
        str.clear();
        getline(file, str);
        if(str.empty())
            break;
        if(str.size() < 14 || str[10] != ' ' || str[12] != ' ')
            std::cout << "Format error" << std::endl;
        else {
            std::string date = get_date(str.substr(0, 10));
            std::string value = get_value(str.substr(12));
            std::map<std::string, std::string>::iterator it = data.find(date);
            if(it != data.end())
                std::cout << "YES" << std::endl;
            else
                std::cout << "NO" << std::endl;
        }
    }
    return true;
}


bool is_number(std::string s) {
    for(size_t i = 0; i < s.size(); i++)
        if(!isdigit(s[i]))
            return false;
    return true;
}

bool    isFloat(std::string s) {
    int count = 0;
    if(s[0] == '.' || s[s.size() - 1] == '.')
        return false;
    for(size_t i = 0; i < s.size(); i++) {
        if(isdigit(s[i]) || s[i] == '.') {
            if(s[i] == '.')
                count++;
        } else
            return false;
        if(count > 1)
            return false;
    }
    return true;
}