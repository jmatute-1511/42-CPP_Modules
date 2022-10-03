/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:02:51 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/03 15:54:26 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string	_target;
		
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm& other);
		~PresidentialPardonForm();
		class Its_signed : public std::exception{
			public :
			const char *what() const throw(){
				return "Form is signed";
			}
		};
		std::string getTarget()const;
		void execute(Bureaucrat const & executer) const;
		void msg_pardom() const;
		PresidentialPardonForm& operator = (PresidentialPardonForm& other);  
};


#endif