# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatute- <jmatute-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 18:08:09 by jmatute-          #+#    #+#              #
#    Updated: 2022/10/06 18:10:39 by jmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp


OBJS	= ${SRCS:.cpp=.o}

NAME	= serialize

CXX		= g++

RM		= rm -f

CXXFLAGS	= -Wall -Wextra -Werror #-std=c++98 #-fsanitize=address


${NAME}:	${OBJS} Makefile 
			@${CXX} ${CXXFLAGS}  ${OBJS} -o ${NAME}
			@echo "COMPILATION IS FINISHED"

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all