# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-aga <juan-aga@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 11:04:21 by juan-aga          #+#    #+#              #
#    Updated: 2023/09/28 10:52:38 by juan-aga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

CC		= c++

CFLAGS	= -Wall -Werror -Wextra -std=c++98 -D DEBUG=$(DEBUG)


ifdef DEBUG
	DEBUG = 1
else
	DEBUG = 0
endif

RM		= rm -rf

SRC		=	main.cpp \
			Contact.cpp \
			Data.cpp
#			PhoneBook.cpp 

all:		${NAME}

${NAME}:	${SRC}
		${CC} ${CFLAGS} ${SRC} -o ${NAME}	

debug:
		make re DEBUG=1

clean:

fclean:	
			${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus
