/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:02:20 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/06 19:58:08 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base
{
	public:
	virtual ~Base(void){};
};


class A:public Base{
	public:
	A(){};
	~A(){};
};

class B:public Base{
	public:
	B(){};
	~B(){};
};

class C:public Base{
	public:
	C(){};
	~C(){};
};

#endif