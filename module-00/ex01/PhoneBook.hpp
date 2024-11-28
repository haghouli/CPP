/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:32:45 by haghouli          #+#    #+#             */
/*   Updated: 2023/05/25 13:31:17 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
    private:
        std::string         first_name;
        std::string         last_name;
        std::string         nickname;
        std::string         phone_number;
        std::string         darkest_secret;

    public :
        std::string get_first_name();
        void        set_first_name(std::string new_first_name);

        std::string get_last_name();
        void        set_last_name(std::string new_first_name);

        std::string get_nickname();
        void        set_nickname(std::string new_first_name);

        std::string get_phone_number();
        void        set_phone_number(std::string new_phone_number);

        std::string get_darkest_secret();
        void        set_darkest_secret(std::string newdarkest_secret);
};

class PhoneBook {
    private:
        Contact contact[8];
        int     current_index;
        int     number_list;
    public:
        PhoneBook();
        void    add_phone_book();
        void    list_phone_books();
        void    search(int index);
};

int is_digit(std::string str);

#endif

