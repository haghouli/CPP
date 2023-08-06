/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:12:12 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/06 08:35:02 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) { };

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
	
	std::fstream f;	
	f.open(target + "_shrubbery", std::ios::trunc | std::ios::out);
	if(!f)
		std::perror("Error");
	f << "\n                      . . .\n"
    << "                   .        .  .     ..    .\n"
    << "                .                 .         .  .\n"
    << "                                .\n"
    << "                               .                ..\n"
    << "               .          .            .              .\n"
    << "               .            '.,        .               .\n"
    << "               .              'b      *\n"
    << "                .              '$    #.                ..\n"
    << "               .    .           $:   #:               .\n"
    << "             ..      .  ..      *#  @):        .   . .\n"
    << "                          .     :@,@):   ,.**:'   .\n"
    << "              .      .,         :@@*: ..**'      .   .\n"
    << "                       '#o.    .:(@'.@*\"'  .\n"
    << "               .  .       'bq,..:,@@*'   ,*      .  .\n"
    << "                          ,p$q8,:@)'  .p*'      .\n"
    << "                   .     '  . '@@Pp@@*'    .  .\n"
    << "                    .  . ..    Y7'.\"     .  .\n"
    << "                              :@):.\n"
    << "                             .:@:'.\n"
    << "                           .::(@:.      ShrubberyCreationForm" << std::endl;
	f.close();
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj) {
	*this = obj;
};

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj) {
	if(this == &obj)
		return *this;
	is_signed = obj.is_signed;
	grade_to_be_signed = obj.grade_to_be_signed;
	grade_to_be_executed = obj.grade_to_be_executed;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }
