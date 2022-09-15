/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:55:21 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/09 15:59:11 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


int main (int argc, char **argv){

	Karen	Crazy_Karen;
	
	if (argc != 2)
		return(0);
	Crazy_Karen.complains(argv[1]);
	return (0);
}