# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smorty <smorty@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/10 18:05:47 by smorty            #+#    #+#              #
#    Updated: 2019/11/24 00:30:56 by smorty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= phonebook

INC_DIR	:= include
SRC_DIR	:= src
OBJ_DIR := obj

CPP		:= phonebook.cpp
CLASSES	:= Contact.class.cpp
INCLUDE	:= phonebook.hpp Contact.class.hpp

OBJ		:= $(addprefix ${OBJ_DIR}/, ${CPP:%.cpp=%.o} $(CLASSES:%.cpp=%.o))

CC		:= clang++
CCFLAGS	:= -Wall -Werror -Wextra

vpath %.cpp	${SRC_DIR}
vpath %.hpp	${INC_DIR}

all: ${NAME}

${NAME}: ${OBJ}
	@${CC} ${CCFLAGS} $^ -o $@

${OBJ_DIR}:
	@mkdir ${OBJ_DIR}

${OBJ}: ${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp ${INCLUDE} | ${OBJ_DIR}
	@${CC} ${CCFLAGS} -I ${INC_DIR} -c $< -o $@

clean:
	@rm -rf ${OBJ_DIR}

fclean: clean
	@rm -f ${NAME}

re: fclean all
