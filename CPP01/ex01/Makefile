# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 17:35:35 by jmatute-          #+#    #+#              #
#    Updated: 2022/08/31 18:07:35 by jmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	=  Zombie.cpp ZombieHorde.cpp main.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= Zombies

CXX		= clang++

RM		= rm -f

CXXLAGS	= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address


${NAME}:	${OBJS} Makefile Zombie.hpp
			@${CXX} ${CXXFLAGS}  ${OBJS} -o ${NAME}
			@echo "COMPILATION IS FINISHED"

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all