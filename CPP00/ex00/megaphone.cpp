/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:46:47 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/26 16:49:43 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
       std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" <<std::endl;
    }
    else
    {
        for(int i = 1; i < argc; i++)
        {
            for (int b = 0; b < strlen(argv[i]); b++)
                std::cout << (char) std::toupper(argv[i][b]);
            if (i < argc - 1)
                std::cout << " ";
        }
    }    
}