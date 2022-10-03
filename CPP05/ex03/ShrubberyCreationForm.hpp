 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:59:58 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/29 19:33:15 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
	private:
	std::string	_target;
	
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
	class Error_file_create: public std::exception{
		public :
		const char *what() const throw(){
			return "Error creating file!";
		}
	};
	class Its_signed : public std::exception{
		public :
		const char *what() const throw(){
			return "Form is signed";
		}
	};	
	
	void	check_if_enable(Bureaucrat const & executer);
	void	execute(Bureaucrat const & executer) const;
	void 	create_shrubbery() const;
	ShrubberyCreationForm& operator = (ShrubberyCreationForm& other);
};

#endif