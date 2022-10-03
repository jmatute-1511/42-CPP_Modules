/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:08:29 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/30 14:07:54 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string _target;
	public:
		
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm& other);
		~RobotomyRequestForm();
			class Its_signed : public std::exception{
				public :
				const char *what() const throw(){
					return "Form is signed";
			}
			};
		void rand_msg() const ;
		std::string getTarget()const;
		void execute(Bureaucrat const & executer) const;
		RobotomyRequestForm& operator = (RobotomyRequestForm& other);
	
};


#endif