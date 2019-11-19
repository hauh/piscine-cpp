# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smorty <smorty@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/19 23:44:58 by smorty            #+#    #+#              #
#    Updated: 2019/11/20 00:06:43 by smorty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= eval_expr

INC_DIR	:= include
SRC_DIR	:= src
OBJ_DIR	:= obj

CPP		:= eval_expr.cpp
CLASSES	:= Fixed.class.cpp OpStack.class.cpp Postfix.class.cpp
INCLUDE	:= eval_expr.hpp Fixed.class.hpp OpStack.class.hpp Postfix.class.hpp

OBJ		:= ${CPP:%.cpp=%.o}
OBJ		+= $(CLASSES:%.cpp=%.o)

CC		:= g++
CCFLAGS	:= -Wall -Werror -Wextra --std=c++11

vpath %.cpp	${SRC_DIR}
vpath %.hpp	${INC_DIR}
vpath %.o	${OBJ_DIR}

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CCFLAGS} $(addprefix ${OBJ_DIR}/, $^) -o $@

${OBJ}: %.o: %.cpp ${INCLUDE} | ${OBJ_DIR}
	${CC} ${CCFLAGS} -I ${INC_DIR} -c $< -o ${OBJ_DIR}/$@

${OBJ_DIR}:
	@mkdir $@

clean:
	@rm -rf ${OBJ_DIR}

fclean: clean
	@rm -f ${NAME}

re: fclean all
