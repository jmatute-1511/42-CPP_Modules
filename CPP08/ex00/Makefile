# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 18:01:11 by jmatute-          #+#    #+#              #
#    Updated: 2022/10/11 19:00:53 by jmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=  main.cpp


OBJS	= ${SRCS:.cpp=.o}

NAME	= templates

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