/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:05:34 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/25 15:55:01 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "Fragtrap.hpp"
#include "Scavtrap.hpp"

class Diamondtrap: public Fragtrap, public Scavtrap
{
	private:
		std::string		_name;
	public:
		Diamondtrap();
		Diamondtrap(std::string	name);
		Diamondtrap( const Diamondtrap& new_diamond);
		
		~Diamondtrap();
		
		std::string get_Dname();
		void		set_Dname(std::string name);
		using	Fragtrap::attack;
		void	whoAmI();

		Diamondtrap& operator=(Diamondtrap const & cpy);
};


#endif