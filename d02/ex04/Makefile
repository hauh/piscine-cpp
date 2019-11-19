# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smorty <smorty@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/19 23:44:58 by smorty            #+#    #+#              #
#    Updated: 2019/11/20 00:39:46 by smorty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= eval_expr

INC_DIR	:= include
SRC_DIR	:= src
OBJ_DIR	:= obj

CPP		:= eval_expr.cpp
CLASSES	:= Fixed.class.cpp OpStack.class.cpp Postfix.class.cpp
INCLUDE	:= eval_expr.hpp Fixed.class.hpp OpStack.class.hpp Postfix.class.hpp

OBJ		:= $(addprefix ${OBJ_DIR}/, ${CPP:%.cpp=%.o} $(CLASSES:%.cpp=%.o))

CC		:= g++
CCFLAGS	:= -Wall -Werror -Wextra --std=c++11

vpath %.cpp	${SRC_DIR}
vpath %.hpp	${INC_DIR}

all: ${NAME}

${NAME}: ${OBJ}
	@${CC} ${CCFLAGS} $^ -o $@

${OBJ}: ${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp ${INCLUDE} | ${OBJ_DIR}
	@${CC} ${CCFLAGS} -I ${INC_DIR} -c $< -o $@

${OBJ_DIR}:
	@mkdir $@

clean:
	@rm -rf ${OBJ_DIR}

fclean: clean
	@rm -f ${NAME}

re: fclean all
