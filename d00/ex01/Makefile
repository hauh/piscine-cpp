# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smorty <smorty@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/10 18:05:47 by smorty            #+#    #+#              #
#    Updated: 2019/11/11 00:35:57 by smorty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= phonebook

INC_DIR	:= include
SRC_DIR	:= src
OBJ_DIR := obj

CPP		:= phonebook.cpp
CLASSES	:= Contact.class.cpp

OBJ		:= ${CPP:%.cpp=%.o}
OBJ		+= ${CLASSES:%.cpp=%.o}

CC		:= g++
CCFLAGS	:= -Wall -Werror -Wextra

vpath %.cpp	${SRC_DIR}

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CCFLAGS} $(addprefix ${OBJ_DIR}/, $^) -o $@

${OBJ_DIR}:
	@mkdir ${OBJ_DIR}

%.o: %.cpp ${OBJ_DIR}
	${CC} ${CCFLAGS} -I ${INC_DIR} -c $< -o ${OBJ_DIR}/$@

clean:
	@rm -rf ${OBJ_DIR}

fclean: clean
	@rm -f ${NAME}

re: fclean all
