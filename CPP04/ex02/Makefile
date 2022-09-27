# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 18:41:05 by jmatute-          #+#    #+#              #
#    Updated: 2022/09/24 15:25:54 by jmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp


OBJS	= ${SRCS:.cpp=.o}

NAME	= Animal

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