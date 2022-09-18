/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 02:14:30 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/18 18:00:41 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class Claptrap
{
	private:
	
		std::string	_name;
		int			_hitpoints;
		int			_energy_points;
		int			_atack_damage;
		
	public:
		
		std::string	get_name();
		int	get_hitpoints();
		int	get_energy_points();
		int	get_atack_damage();

		void set_hitpoints(int new_hp);
		void set_energy_points(int new_ep);
		void set_atack_damage(int new_at);
			
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		Claptrap();
		Claptrap(Claptrap& cpy);
		Claptrap(std::string name);
		~Claptrap();

		Claptrap& operator=(Claptrap  & equal);
};

#endif