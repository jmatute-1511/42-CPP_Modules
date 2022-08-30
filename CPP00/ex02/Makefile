# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 17:28:27 by jmatute-          #+#    #+#              #
#    Updated: 2022/08/29 17:22:51 by jmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	test.cpp Account.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= info_bank

CXX		= clang++

RM		= rm -f

CXXLAGS	= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address


${NAME}:	${OBJS} Makefile Account.hpp
			@${CXX} ${CXXFLAGS}  ${OBJS} -o ${NAME}
			@echo "COMPILATION IS FINISHED"

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all