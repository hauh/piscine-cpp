# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smorty <smorty@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/10 18:05:47 by smorty            #+#    #+#              #
#    Updated: 2019/11/13 19:11:42 by smorty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= ex07

CPP		:= ex07.cpp
OBJ		:= ${CPP:%.cpp=%.o}

CC		:= g++
CCFLAGS	:= -Wall -Werror -Wextra

all: ${NAME}

NAME: ${OBJ}
	${CC} ${CCFLAGS} $^ -o $<

%.o: %.cpp
	${CC} ${CCFLAGS} -c $<

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
