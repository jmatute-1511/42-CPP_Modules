/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:50:21 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/28 17:59:40 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <ostream>
#include <exception>

class Bureaucrat
{
	private:
	std::string		_name;
	int				_grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade );
		Bureaucrat(Bureaucrat&	other);
		~Bureaucrat();
		
	class GradeTooHighException: public std::exception{	
		public:
		const char	*what() const throw(){
			return "Grade of Bureacrat is to high!";
		}
	};
	class GradeTooLowException: public std::exception{
		public:
		const char	*what() const throw(){
			return "Grade of Bureacrat is to low!";
		}
	};
	std::string	getName() const;
	int getGrade() const;
	
	void IncrementGrade();
	void DecrementGrade();
	void throw_errors();
	Bureaucrat&	operator = (Bureaucrat& other);
	
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat& buro);

#endif
