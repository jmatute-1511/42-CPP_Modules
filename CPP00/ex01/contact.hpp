/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:12:26 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/28 17:12:26 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

#define FIRST_NAME 0
#define LAST_NAME 1
#define NICKNAME 2
#define PHONE 3
#define DARKEST_SECRET 4

class contact
{		
	public:
		void		set_arg(int type, std::string new_string);
		std::string	get_arg(int type);

		contact();
		~contact();
	private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone;
	std::string		_darkest_secret;
};



#endif
