/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:09:50 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/06 21:21:14 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

class File {
public:
    std::ifstream   in_file;
    std::ofstream   out_file;
    std::string     file_content;

    bool    errorsHandler(int ac, char **av);
    void    readFileContent();
    void    ft_replace(std::string s1, std::string s2, std::string file_name);
    ~File();
};