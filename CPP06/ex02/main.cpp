/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:28:04 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/10 16:14:33 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

class ExeptionBase:public std::exception{
	public :
	virtual const char *what () const throw(){
			return "Does not belong to the Base class type";
	}
};

Base *generate(){
	int random = rand() % 3;
	
	switch (random)
	{
		case 1:
			return new A;
		case 2:
			return new B;
		default: return new C;
	}
}

void identify(Base* hide) {
	
	if (dynamic_cast<A*>(hide)){
		std::cout << "type of object is A" << std::endl;
		return ;
	}
	else if (dynamic_cast<B*>(hide)){
		std::cout << "type of object is B" << std::endl;
		return ;
	}
	else if (dynamic_cast<C*>(hide)){
		std::cout << "type of object is C" << std::endl;
		return ;
	}
	std::cout << "Does not belong to the Base class type" << std::endl;
}

void identify(Base& hide){
	try
	{
		
		if (dynamic_cast<A*>(&hide))
			std::cout << "type of object is A" << std::endl;
		else if (dynamic_cast<B*>(&hide))
			std::cout << "type of object is B" << std::endl;
		else if(dynamic_cast<C*>(&hide))
			std::cout << "type of object is C" << std::endl;
		else
			throw ExeptionBase();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main(){
	Base *hide_object;

	A* new_a = new A;
	hide_object = new_a;
	for(int i = 0; i < 100; i++){
		hide_object = generate();
		identify(*hide_object);
		delete hide_object;
	}
	//system("leaks show_what_is");
}