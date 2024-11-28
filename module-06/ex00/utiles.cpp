/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:49:41 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/21 08:41:47 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.hpp"

bool is_int(std::string s)
{
    int start = 0;
    if (s[0] == '+' || s[0] == '-')
        start = 1;
    for (size_t i = start; i < s.size(); i++)
        if (!isdigit(s[i]))
            return false;
    return true;
}

bool is_char(std::string s)
{
    if (s.size() == 1 && isalpha(s[0]))
        return true;
    return false;
}

bool is_float(std::string s)
{
    int start = 0;
    int count = 0;
    if(s[0] == '+' || s[0] == '-')
        start = 1;
    for (size_t i = start; i < s.size() - 1; i++)
    {
        if(!isdigit(s[i]) && s[i] != '.')
            return false;
        if(s[i] == '.')
            count++;
        if(count > 1)
            return false;
    }
    if(s[s.size() - 1] != 'f')
        return false;
    return true;
}

bool is_double(std::string s)
{
    int start = 0;
    int count = 0;
    if(s[0] == '+' || s[0] == '-')
        start = 1;
    for (size_t i = start; i < s.size() ; i++)
    {
        if(!isdigit(s[i]) && s[i] != '.')
            return false;
        if(s[i] == '.')
            count++;
        if(count > 1)
            return false;
    }
    return true;
}

char    detect_type(std::string s) {
    if(is_char(s))
        return 'c';
    else if(is_int(s))
        return 'i';
    else if(is_float(s))
        return 'f';
    else if(is_double(s))
        return 'd';
    else
        return 'u';
}

