/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myreplace.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:49:52 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/05 19:32:18 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYREPLACE_HPP
#define MYREPLACE_HPP

#include <iostream>
#include <fstream>


class MyReplace
{
	private:
		std::ofstream	_of_file;
		std::ifstream	_if_file;
		std::string		_file;
		std::string		_file_to_write;
		std::string		_rpl_string;
		std::string		_new_string;
		bool 		_err;
	public:
		void	write_in_file();
		MyReplace(char *in_file, char *str1, char *str2);
			~MyReplace();
};


#endif