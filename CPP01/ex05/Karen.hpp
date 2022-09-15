/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:12:08 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/08 16:10:53 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void		error(void);
	public:
		void	complains(std::string leveln);
		Karen();
		~Karen();
};

#endif