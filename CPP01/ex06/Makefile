# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 19:14:32 by jmatute-          #+#    #+#              #
#    Updated: 2022/09/08 15:59:25 by jmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=  main.cpp Karen.cpp


OBJS	= ${SRCS:.cpp=.o}

NAME	= karen_complains

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