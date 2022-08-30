# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 19:14:32 by jmatute-          #+#    #+#              #
#    Updated: 2022/08/30 18:12:38 by jmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= contact.cpp phone_book.cpp main.cpp


OBJS	= ${SRCS:.cpp=.o}

NAME	= phone_book

CXX		= g++ 

RM		= rm -f

CXXFLAGS=  -Wall -Wextra -Werror -std=c++98
	
${NAME}:	${OBJS} Makefile 
			${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}  

			@echo "COMPILATION IS FINISHED"

all:		${NAME}

clean:
			${RM} ${OBJS} l

fclean:		clean
			${RM} ${NAME}

re:			fclean all