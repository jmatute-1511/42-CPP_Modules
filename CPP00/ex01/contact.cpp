/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:28:38 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/28 19:21:10 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"


contact::contact()
{
    _first_name = "";
    _last_name = "";
    _nickname = "";
    _phone= "";
    _darkest_secret = "";
}

contact::~contact()
{
    return ;
}

void    contact::set_arg(int type, std::string new_string){
    
    if (type == FIRST_NAME)
        this->_first_name = new_string;
    else if (type == LAST_NAME)
        this->_last_name = new_string;
    else if (type == NICKNAME)
        this->_nickname = new_string;
    else if (type == PHONE)
        this->_phone = new_string;
    else if (type == DARKEST_SECRET)
        this->_darkest_secret = new_string;
}

std::string	contact::get_arg(int type){
	
	if (type == FIRST_NAME)
        return(this->_first_name);
    if (type == LAST_NAME)
        return(this->_last_name);
    if (type == NICKNAME)
        return(this->_nickname);
    if (type == PHONE)
        return(this->_phone);
    if (type == DARKEST_SECRET)
        return(this->_darkest_secret);
	return(NULL);
}