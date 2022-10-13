/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:21:59 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/13 16:52:28 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span{
	private:
	std::vector<int>	_my_vector;
	unsigned int		_filled;
	unsigned int		_max_lenght;
	public:
		Span(unsigned int max_lenght);
		~Span();
	
	class Filled_exception: public std::exception{
		public:
		const char *what() const throw(){
			return "Container its filled. Yo can't insert more elements!";
		}
	};
	
	class NotSpan_exception: public std::exception{
		public:
		const char *what() const throw(){
			return "Not span to find into container!";
		}	
	};
	void sort_my_vector();
	unsigned int  shortestSpan();
	unsigned int longestSpan();
	void addNumber(int num);
};
#endif