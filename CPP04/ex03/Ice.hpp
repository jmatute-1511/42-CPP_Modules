/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:36:31 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/26 22:23:28 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "Materia.hpp"
#include "Character.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice& other);
		AMateria* clone() const ;
		void use(ICharacter& target);
		~Ice();
};

#endif