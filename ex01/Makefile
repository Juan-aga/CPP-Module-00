# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-aga <juan-aga@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 11:04:21 by juan-aga          #+#    #+#              #
#    Updated: 2023/10/02 12:05:15 by juan-aga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

CC		= c++

CFLAGS	= -Wall -Werror -Wextra -std=c++98 -D DEBUG=$(DEBUG) $(INCLUDES)

RM		= rm -rf

SRC_DIR	=	src/

OBJ_DIR =	obj/

F_SRC	=	main.cpp	\
			Contact.cpp	\
			Data.cpp	\
			PhoneBook.cpp 

SRC		=	${addprefix $(SRC_DIR), $(F_SRC)}

OBJ		=	${patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.opp, $(SRC)}

HEADERS	=	include/Contact.hpp	\
			include/Data.hpp	\
			include/PhoneBook.hpp

INCLUDES =	-I./include/#${addprefix -I, $(HEADERS)}

ifdef DEBUG
	DEBUG = 1
else
	DEBUG = 0
endif

UNAME_S		:= $(shell uname -s)

ifeq ($(UNAME_S), Darwin)
		LEAKS = @leaks -q -atExit -- ./${NAME}
else
		LEAKS = @echo "Can't use leaks in" ${UNAME_S}.
endif

all:		${NAME}

${NAME}:	$(HEADERS) ${OBJ}
			${CC} ${CFLAGS} ${OBJ} -o ${NAME}

$(OBJ_DIR)%.opp: $(SRC_DIR)%.cpp #$(HEADERS)
			mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) -c $^ -o $@

debug:
			make re DEBUG=1

leaks:		${NAME}
			${LEAKS}

clean: 
			$(RM) $(OBJ_DIR)

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus
