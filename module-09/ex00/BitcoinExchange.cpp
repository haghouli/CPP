/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 07:49:22 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/30 09:17:16 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    data_file.open("data.csv");
    if(!data_file) {
        perror("Error");
        exit(1);
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & obj) {
    (void)obj;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & obj) {
    (void)obj;
    return *this;
}

BitcoinExchange::~BitcoinExchange() { }

void    BitcoinExchange::setFile(char * av) {
    file.open(av);
    if(!file) {
        perror("Error: ");
        exit(1);
    }
}

std::string BitcoinExchange::get_current_date() {
    time_t now;
	struct tm * timeinfo;
	char current_date[11];

	time(&now);
	timeinfo = localtime(&now);
	strftime(current_date,11, "%Y-%m-%d", timeinfo);

	return (current_date);
}

std::string BitcoinExchange::print_error(std::string s) {
    std::cout << "Error: bad input => " << s << std::endl;
    return "";
}

std::string BitcoinExchange::get_date(std::string s) {
    std::string current_date = get_current_date();
    if(current_date < s)
        print_error(s);
    if(s[4] != '-' || s[7] != '-')
        return print_error(s);
    std::string year = s.substr(0, 4);
    std::string month = s.substr(5, 2);
    std::string day = s.substr(8, 2);
    if(!is_number(year) || !is_number(month) || !is_number(day))
        return print_error(s);
    if(year < "2009" || year > "2023" || month < "01" || month > "12" || day < "01" || day > "31")
        return print_error(s);
    else if((month == "04" || month == "06" || month == "09" || month == "11") &&  day > "30")
        return print_error(s);
    else if(month == "2" &&  day > "29")
        return print_error(s);
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
    std::string str = s.substr(13);
    if(str[0] == '-') {
        std::cout << "Error: not a positive number." <<  std::endl;
        return "";
    }
    if(!is_number(str))
        if(!isFloat(str))
            return print_error(s);
    long n = strtol(str.c_str(), NULL, 10);
    bool b = errno == ERANGE;
    if(b || n > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        return "";
    }
    return str;
}

void    BitcoinExchange::parse_file() {
    
    std::string str;
    int i = 0;

    getline(file, str);
    if(str == "date | value") {
        while (1)
        {
            str.clear();
            getline(file, str);
            if(str.empty() && file.eof()) {
                if(i == 0)
                    std::cout << "Error: empty file"<< std::endl;
                break;
            }
            if(str.empty())
                std::cout << "Error: found only a new line"<< std::endl;
            else if(str.size() < 14 || str[10] != ' ' || str[12] != ' ' || str[11] != '|')
                print_error(str);
            else {
                std::string date = get_date(str.substr(0, 10));
                std::string value;
                if(!date.empty())
                    value = get_value(str);
                if(!date.empty() && !value.empty()) {
                    std::map<std::string, std::string>::iterator it = data.find(date);
                    if(it == data.end()) {
                        it = data.lower_bound(date);
                        if(it != data.begin())
                            it--;
                        else {
                            std::cout << "Error: the lower date is 2009-01-02" << std::endl;
                            return ;
                        }
                    }
                    float result = atof(value.c_str()) * atof(it->second.c_str());
                    std::cout << date << " => " << value << " = " << result << std::endl;
                }
            }
            i++;
        }
    } else
        std::cout << "Error: Invalid header" << std::endl;
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
