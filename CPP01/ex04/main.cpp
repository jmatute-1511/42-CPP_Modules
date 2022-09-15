/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:37:59 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/05 19:35:36 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myreplace.hpp"

int main(int argc, char **argv){
	
	if(argc != 4)
		return (0);
	MyReplace Replaced(argv[1], argv[2], argv[3]);
	Replaced.write_in_file();
}