# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 18:41:05 by jmatute-          #+#    #+#              #
#    Updated: 2022/09/19 21:54:40 by jmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	main.cpp Fixed.cpp


OBJS	= ${SRCS:.cpp=.o}

NAME	= Fixed

CXX		= clang++

RM		= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address


${NAME}:	${OBJS} Makefile 
			@${CXX} ${CXXFLAGS}  ${OBJS} -o ${NAME}
			@echo "COMPILATION IS FINISHED"

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all