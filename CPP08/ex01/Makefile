# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 18:21:35 by jmatute-          #+#    #+#              #
#    Updated: 2022/10/13 16:55:35 by jmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=  span.cpp main.cpp


OBJS	= ${SRCS:.cpp=.o}

NAME	= span

CXX		= clang++

RM		= rm -f

CXXFLAGS	= -Wall -Wextra -Werror  #-fsanitize=address


${NAME}:	${OBJS} Makefile 
			@${CXX} ${CXXFLAGS}  ${OBJS} -o ${NAME}
			@echo "COMPILATION IS FINISHED"

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all