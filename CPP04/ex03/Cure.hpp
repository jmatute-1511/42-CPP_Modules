/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:52:25 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/26 22:22:50 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "Materia.hpp"
#include "Character.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(Cure& other);
		AMateria* clone() const;
		void use(ICharacter& target);
		~Cure();
};
#endif