/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 02:14:30 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/20 18:35:52 by jmatute-         ###   ########.fr       */
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
		
		std::string	get_name() const;
		int	get_hitpoints() const;
		int	get_energy_points() const;
		int	get_atack_damage() const;

		void set_hitpoints(int new_hp);
		void set_energy_points(int new_ep);
		void set_atack_damage(int new_at);
			
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		Claptrap();
		Claptrap(Claptrap  const & cpy);
		Claptrap(std::string name);
		~Claptrap();

		Claptrap& operator=(Claptrap const & equal);
};

#endif