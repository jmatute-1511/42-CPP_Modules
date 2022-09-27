/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:06:45 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/26 22:28:08 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
	protected:
	std::string	_type;
	
	public:
	AMateria(std::string const & type);
	AMateria(AMateria& other);
	virtual ~AMateria();
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	
	AMateria& operator=(AMateria& other);
};

#endif