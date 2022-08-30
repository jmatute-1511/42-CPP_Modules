/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:50:42 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/28 19:56:58 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

#define MAX_CONTACTS 9

class phone_book
{
	public:
		contact		book_contacts[MAX_CONTACTS];
		void 		init_phonebook(void);
		
		phone_book();
		~phone_book();
	private:
		void	_display_contacts();
		int		_add_contacts(int n_contact);
		
};

#endif