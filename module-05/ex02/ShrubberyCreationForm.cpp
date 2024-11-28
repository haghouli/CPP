/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:12:12 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/18 09:29:44 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) { };

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
	this->target = target; 
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj) : AForm(obj) {
	*this = obj;
};

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj)  {
	if(this == &obj)
		return *this;
  target = obj.target;
	is_signed = obj.is_signed;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
  if(!is_signed)
		throw "The form Should be signed first";
	if(grade_to_be_executed < executor.getGrade())
		throw AForm::GradeTooLowException();
  std::fstream f;
  std::string file_name =  target + "_shrubbery";
	f.open(file_name.c_str() ,std::ios::trunc | std::ios::out);
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
}
