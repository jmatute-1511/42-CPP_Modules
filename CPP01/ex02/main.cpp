/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:02:04 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/01 17:21:35 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
    
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string& stringREF = str;
    
    std::cout << "THIS IS ONLY STRING: " << &str << std::endl;
    std::cout << "THIS IS PTR THE STRING: " << stringPTR << std::endl;
    std::cout << "THIS IS THE REFERENE OF STRING: " << &stringREF << std::endl;
    std::cout <<std::endl;
    std::cout << "THIS IS ONLY STRING: " << str << std::endl;
    std::cout << "THIS IS PTR THE STRING: " << (char *)stringPTR << std::endl;
    std::cout << "THIS IS THE REFERENE OF STRING: " << stringREF << std::endl;
}