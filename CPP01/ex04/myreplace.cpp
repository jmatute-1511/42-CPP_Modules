/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myreplace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:58:44 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/08 15:09:29 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myreplace.hpp"

void MyReplace::write_in_file(){
	std::string	line;
	int pos = 0;

	if (this->_err == false){
		
		while (std::getline(this->_if_file,line))
		{
			pos = line.find(this->_rpl_string);
			if (pos >= 0){
				line.erase(pos,this->_rpl_string.length());
				line.insert(pos,this->_new_string);
				this->_of_file << line << std::endl;
			}
			else
				this->_of_file << line << std::endl;
		}
	}
}

MyReplace::MyReplace(char *in_file, char *str1, char *str2){
	this->_file = in_file;
	this->_rpl_string = str1;
	this->_new_string = str2;

	if (this->_rpl_string.empty() || this->_new_string.empty()){
		std::cout << "SOME STRING EMPTY" << std::endl;
		this->_err = true;
	}
	std::string of_name = this->_file.append(".replace");
	this->_of_file.open(of_name);
	this->_if_file.open(in_file);
	if (this->_of_file.fail() || this->_if_file.fail()){
		if (this->_if_file.fail())
			std::cout << "ERROR OPENING FILE" << std::endl;
		else if (this->_of_file.fail())
			std::cout << "ERROR CREATING REPLACE FILE" << std::endl;
		this->_err = true;
	}
	else
		this->_err = false;
	return ;
}

MyReplace::~MyReplace(){
	return ;
}
