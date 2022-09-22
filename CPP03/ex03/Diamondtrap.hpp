/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:05:34 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/22 15:49:52 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "Fragtrap.hpp"
#include "Scavtrap.hpp"

class Diamondtrap: public Fragtrap, public Scavtrap
{
	public:
		Diamondtrap();
		Diamondtrap(std::string	name);
		Diamondtrap( const Diamondtrap& new_diamond);
		
		~Diamondtrap();

		void	attack(std::string const & target);
		void	whoAmI();

		Diamondtrap& operator=(Diamondtrap const & cpy);
};


#endif