# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-aga <juan-aga@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 11:04:21 by juan-aga          #+#    #+#              #
#    Updated: 2023/10/02 11:27:07 by juan-aga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

CC		= c++

CFLAGS	= -Wall -Werror -Wextra -std=c++98 -D DEBUG=$(DEBUG) $(INCLUDES)

ifdef DEBUG
	DEBUG = 1
else
	DEBUG = 0
endif

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

all:		${NAME}

${NAME}:	$(HEADERS) ${OBJ}
			${CC} ${CFLAGS} ${OBJ} -o ${NAME}

$(OBJ_DIR)%.opp: $(SRC_DIR)%.cpp #$(HEADERS)
			mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) -c $^ -o $@

debug:
			make re DEBUG=1

leaks:		${NAME}
			leaks -q -atExit -- ./${NAME}

clean: 
			$(RM) $(OBJ_DIR)

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus
