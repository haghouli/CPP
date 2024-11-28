/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:46:25 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/21 10:01:51 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UTILES_HPP
#define UTILES_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits.h>

bool is_char(std::string s);
bool is_int(std::string s);
bool is_float(std::string s);
bool is_double(std::string s);
char    detect_type(std::string s);


#endif