/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:47:36 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/03 18:43:54 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form
{
	protected:
	int		_grade;
	bool	_boolsigned;
	int		_execgrade;
	std::string	_name;
	
	public:
		Form();
		Form(std::string name, int grade, int execgrade);
		Form(Form& other);
		virtual ~Form();
	class GradeTooHighException: public std::exception{
		public:
		virtual const char * what() const throw(){
			return "Form Grade to high!";
		}
	};
	class GradeTooLowException : public std::exception{
		public :
		virtual const char *what () const throw(){
				return "Form Grade to low!";
		}
	};
	int getGrade() const;
	int getExecgrade() const;
	std::string	getName() const;
	bool isSigned() const;
	void besigned(Bureaucrat const & buro);
	virtual void execute(Bureaucrat const & executer) const = 0;
	Form& operator=(Form& other);
};

std::ostream& operator<<(std::ostream& out, Form& other);
#endif