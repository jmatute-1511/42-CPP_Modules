/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 08:15:20 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/20 18:41:38 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "Claptrap.hpp"

class Scavtrap: public Claptrap
{
	public:
		void attack(std::string const & target);
		void gurdgate();
		Scavtrap();
		Scavtrap(std::string	new_name);
		Scavtrap(Scavtrap const &other);
		~Scavtrap();
	Scavtrap&	operator = (Scavtrap const & other);
};

#endif
