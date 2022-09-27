/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:47:30 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/26 22:32:14 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
#define MATERIA_HPP

#include <iostream>
#include "AMateria.hpp"


class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_srcmateria[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource& other);
		~MateriaSource();
		
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
	MateriaSource& operator= (MateriaSource& other);
};

#endif
