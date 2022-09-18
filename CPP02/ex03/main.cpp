/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:50:56 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/18 17:55:50 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void){
    Point   A = Point(0.0f, 1.0f);
    Point   B = Point(-1.0f,-1.0f);
    Point   C = Point(1.0f, -1.0f);
    Point   point = Point(0.5f,0.0f);

    bool bolean = bsp(A,B,C,point);
    
    std::cout << bolean << std::endl;
}