/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:59:35 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/28 20:07:19 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

phone_book::phone_book(){
	return;
}

phone_book::~phone_book(){
	return;
}

int		phone_book::_add_contacts(int n_contact){

	std::string buff;
	std::string message[5] = {"name", "last name", "nickname", "phone number", "darkest_secret"};
	int it;
	int	last_contact;

	it = 0;
	last_contact = 0;
	if (n_contact > MAX_CONTACTS)
		last_contact = n_contact % MAX_CONTACTS;
	else
		last_contact = n_contact;
	while (it < 5)
	{
		std::cout << "\nInsert " << message[it] << " :";
		if (!std::getline(std::cin, buff))
			return (1);
		this->book_contacts[last_contact].set_arg(it,buff);
		it++;
	}
	return (0);
}

static void print_str(std::string str){
	if (str.length() > 10){
		for(int it = 0; it < 9; it++)
			std::cout << str[it];
		std::cout << ".";
	}
	else{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << str;
		std::cout << std::setw(0);

	}
}
void	phone_book::_display_contacts(){
	
	std::string str;
	int		index;
	
	if (book_contacts[0].get_arg(0).empty()){
		std::cout << "You don't have contacts" << std::endl;
		return ;
	}
	std::cout << "If you want see all contacts type 'ALL' else Insert index of contact:";
	if (!std::getline(std::cin, str))
		return ;
	std::cout << std::endl;
	if (str == "ALL"){		
		std::cout << "INDEX     |" << "FIRST NAME|" << "LAST NAME |" << "NICKNMAE  |" << "PHONE NBR |" << std::endl;
		for (int it = 0; it <= MAX_CONTACTS && !book_contacts[it].get_arg(0).empty(); it++)
		{
			std::cout << std::setfill(' ') << std::setw(10);
			std::cout << it;
			std::cout << std::setw(0);
			std::cout << "|";
			for(int i = 0; i < 4 && !book_contacts[it].get_arg(i).empty(); i++){
				str = book_contacts[it].get_arg(i);
				print_str(str);
				std::cout << "|";		
			}
			std::cout << std::endl;
		}	
	}
	else{
		std::stringstream toint(str);
		toint >> index;
		if (index >= 0 && index < MAX_CONTACTS){
			std::cout << "INDEX     |" << "FIRST NAME|" << "LAST NAME |" << "NICKNMAE  |" << "PHONE NBR |" << std::endl;
			std::cout << std::setfill(' ') << std::setw(10);
			std::cout << index;
			std::cout << std::setw(0);
			std::cout << "|";
			for(int i = 0; i < 4 && !book_contacts[index].get_arg(i).empty(); i++){
					std::cout << std::setfill(' ') << std::setw(10);
					str = book_contacts[index].get_arg(i);
					print_str(str);
					std::cout << "|";		
				}
		}
		else
			std::cout << "You don't have contact wiht this index" << std::endl;
	}
}

void phone_book::init_phonebook(){
	
	std::string		line;
	int n_contac;
	
	n_contac = 0;

	std::cout <<"        _                        _                 _    " << std::endl;
	std::cout <<"       | |                      | |               | |   " << std::endl;
	std::cout <<"  _ __ | |__   ___  _ __   ___  | |__   ___   ___ | | __" << std::endl;
	std::cout <<" | '_ \\| '_ \\ / _ \\| '_ \\ / _ \\ | '_ \\ / _ \\ / _ \\| |/ /" << std::endl;
	std::cout <<" | |_) | | | | (_) | | | |  __/ | |_) | (_) | (_) |   < " << std::endl;
	std::cout <<" | .__/|_| |_|\\___/|_| |_|\\___| |_.__/ \\___/ \\___/|_|\\_\\" << std::endl;
	std::cout <<" | |                                                    " << std::endl;
	std::cout <<" |_|                                                    " << std::endl;
	while(42){
		
		std::cout << "\nInsert command:";
		if (!std::getline(std::cin, line))
			break;
		if (line == "ADD"){
			_add_contacts(n_contac);
			n_contac++;
		}
		else if (line == "SEARCH")
			_display_contacts();
		else if (line == "EXIT")
			break;
		else
			std::cout << "Invalid command; Valid commands : ADD, SEARCH, EXIT" << std::endl;
	}
}