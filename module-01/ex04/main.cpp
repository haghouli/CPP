/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:09:32 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/06 21:20:57 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av)
{
    File f;

    std::string file_name = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if(!f.errorsHandler(ac, av))
        return 1;
    f.readFileContent();
    f.ft_replace(s1, s2, file_name);
    return 0;
}