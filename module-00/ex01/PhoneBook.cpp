/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:41:41 by haghouli          #+#    #+#             */
/*   Updated: 2023/06/20 09:24:41 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int is_digit(std::string str) {
    for(int i = 0; str[i]; i++) {
        if(!isdigit(str[i]))
            return (0);
    }
    return (1);
}

std::string Contact::get_first_name() {
    return first_name;
}

void    Contact::set_first_name(std::string new_first_name) {
    first_name = new_first_name;
}

std::string Contact::get_last_name() {
    return last_name;
}

void    Contact::set_last_name(std::string new_last_name) {
    last_name = new_last_name;
}

std::string Contact::get_nickname() {
    return nickname;
}

void    Contact::set_nickname(std::string new_nickname) {
    nickname = new_nickname;
}

std::string     Contact::get_phone_number() {
    return phone_number;
}

void    Contact::set_phone_number(std::string new_phone_number) {
    phone_number = new_phone_number;
}

std::string Contact::get_darkest_secret() {
    return darkest_secret;
}

void    Contact::set_darkest_secret(std::string new_darkest_secret) {
    darkest_secret = new_darkest_secret;
}

PhoneBook::PhoneBook() {
  current_index = 0;
  number_list = 0;
}

void   PhoneBook::add_phone_book() {

    std::string     first_name;
    std::string     last_name;
    std::string     nickname;
    std::string     phone_number;
    std::string     darkest_secret;
    
    f_name :
    std::cout << "put first name : " ;
    getline(std::cin, first_name);
    if(std::cin.eof())
        std::exit(0);
    if(first_name.empty())
        goto f_name ;

    l_name :
    std::cout << "put last name : " ;
    getline(std::cin, last_name);
    if(std::cin.eof())
        std::exit(0);
    if(last_name.empty())
        goto l_name ;

    n_name :
    std::cout << "put nickname : " ;
    getline(std::cin, nickname);
    if(std::cin.eof())
        std::exit(0);
    if(nickname.empty())
        goto n_name ;

    p_number :
    std::cout << "put phone number : " ;
    getline(std::cin, phone_number);
    if(std::cin.eof())
        std::exit(0);
    if(phone_number.empty())
        goto p_number ;
    if(!is_digit(phone_number)) {
        std::cout << "The Number should be a digit" << std::endl;
        goto p_number ;
    }

    d_secret :
    std::cout << "put darkest secret : " ;
    getline(std::cin, darkest_secret);
    if(std::cin.eof())
        std::exit(0);
    if(darkest_secret.empty())
        goto d_secret ;
    

    contact[current_index].set_first_name(first_name);
    contact[current_index].set_last_name(last_name);
    contact[current_index].set_nickname(nickname);
    contact[current_index].set_phone_number(phone_number);
    contact[current_index].set_darkest_secret(darkest_secret);
    current_index++;
    if(current_index >= 8)
        current_index = 0;
    if(number_list < 8)
        number_list++;
}

void    PhoneBook::list_phone_books() {
    for(int i = 0; i < number_list; i++)
    {
        std::cout << std::setw(10) << std::to_string(i) << "|";  
    
        if(contact[i].get_first_name().length() > 10)
            std::cout << std::setw(10) << contact[i].get_first_name().substr(0, 10).replace(9,10, ".") 
                    << "|";
        else
            std::cout << std::setw(10) << contact[i].get_first_name()
                     << "|";
    
        if(contact[i].get_last_name().length() > 10)
            std::cout << std::setw(10) << contact[i].get_last_name().substr(0, 10).replace(9,10, ".") 
                    << "|";
        else
            std::cout << std::setw(10) << contact[i].get_last_name() << "|";

        if(contact[i].get_nickname().length() > 10)
            std::cout << std::setw(10) << contact[i].get_nickname().substr(0, 10).replace(9,10, ".") ;
        else
            std::cout << std::setw(10) << contact[i].get_nickname();

        std::cout << std::endl;
    }
}

void    PhoneBook::search(int index) {
    if(index < number_list) {
            std::cout << index << std::endl;
            std::cout << contact[index].get_first_name() << std::endl;
            std::cout << contact[index].get_last_name() << std::endl;
            std::cout << contact[index].get_nickname() << std::endl;
            std::cout << contact[index].get_phone_number() << std::endl;
            std::cout << contact[index].get_darkest_secret() << std::endl; 
    } else
        std::cout << "invalid index" << std::endl;
}