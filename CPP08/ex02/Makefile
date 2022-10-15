# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatute- <jmatute-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 12:07:31 by jmatute-          #+#    #+#              #
#    Updated: 2022/10/15 12:27:24 by jmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=   main.cpp MutantStack.cpp


OBJS	= ${SRCS:.cpp=.o}

NAME	= MutantStack

CXX		= g++

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