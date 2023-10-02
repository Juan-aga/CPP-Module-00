# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-aga <juan-aga@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 11:04:21 by juan-aga          #+#    #+#              #
#    Updated: 2023/10/02 12:04:24 by juan-aga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= c++

CFLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRC		= megaphone.cpp

ifndef ARG
	ARG = ""
endif

UNAME_S		:= $(shell uname -s)

ifeq ($(UNAME_S), Darwin)
		LEAKS = @leaks -q -atExit -- ./${NAME}
else
		LEAKS = @echo "Can't use leaks in" ${UNAME_S}.
endif

all:		${NAME}

${NAME}:	${SRC}
		${CC} ${CFLAGS} ${SRC} -o ${NAME}

leaks:		${NAME}
			${LEAKS} ${ARG}

clean:

fclean:	
			${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus
