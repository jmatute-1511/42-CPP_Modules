/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:51:46 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/13 17:09:18 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "span.hpp"

int main()
{
	try
	{
		Span sp = Span(1000);
		int r;
		for(int it = 0; it < 1000; it++){
			r = rand() % 900;
			sp.addNumber(r);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(6);
		std::vector<int> vec;

		for(int it = 0; it < 20; it += it + 1)
		{
			std::cout << it << std::endl;
			vec.push_back(it);
		}

		std::vector<int>::iterator begin = vec.begin();
		std::vector<int>::iterator end = vec.end();
		sp.addNumber(begin, end);
		sp.addNumber(15);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
	