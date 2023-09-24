# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-aga <juan-aga@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 11:04:21 by juan-aga          #+#    #+#              #
#    Updated: 2023/09/24 11:15:09 by juan-aga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= c++

CFLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRC		= megaphone.cpp

all:		${NAME}

${NAME}:	${SRC}
		${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:

fclean:	
			${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus
