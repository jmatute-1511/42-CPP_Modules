/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 08:15:20 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/22 18:32:46 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "Claptrap.hpp"

class Scavtrap: virtual public Claptrap
{
	public:
		void attack(std::string const & target);
		void gurdgate();
		Scavtrap();
		Scavtrap(std::string	new_name);
		Scavtrap(Scavtrap const &other);
		virtual ~Scavtrap();
		
	Scavtrap&	operator = (Scavtrap const & other);
};

#endif
