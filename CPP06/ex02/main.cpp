/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:28:04 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/06 20:07:27 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base *random_object(){
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

void show_what_is(Base *hide){

	
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
}

int main(){
	Base *hide_object;

	A* new_a = new A;
	hide_object = new_a;
	hide_object = random_object();
	show_what_is(hide_object);
	delete hide_object;
}