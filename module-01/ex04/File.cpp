/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:09:26 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/06 21:22:21 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

bool    File::errorsHandler(int ac, char **av)
{
    if(ac != 4) {
        std::cerr << "Required 3 Argument" << std::endl;
        return false;
    }
    in_file.open(av[1]);
    if(!in_file) {
        std::perror("Error: ");
        return false;
    }
    return true;
}


void    File::readFileContent()
{
    std::string  line;

    while (1)
    {
        getline(in_file, line);
        file_content += line;
        if(in_file.eof())
            break;
        file_content += "\n";
    }
}

void    File::ft_replace(std::string s1, std::string s2, std::string file_name) {
    
    int s1_length = s1.length();
    int s2_length  = s2.length();

    for(size_t i = 0; i < file_content.length(); i++) {
        if(s1[0] == file_content[i])
        {
            std::string sub = file_content.substr(i, s1_length);
            if(!sub.compare(s1))
            {
                file_content.erase(i, s1_length );
                file_content.insert(i, s2);
                i += s2_length - 1;
            }
        }
    }
    std::string outfile_name = file_name + ".replace";
    out_file.open(outfile_name);
    out_file << file_content;
}

File::~File()
{
    in_file.close();
    out_file.close();    
}