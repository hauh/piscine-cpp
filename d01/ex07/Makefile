# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smorty <smorty@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/10 18:05:47 by smorty            #+#    #+#              #
#    Updated: 2019/11/24 00:25:58 by smorty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= replace

CPP		:= ex07.cpp
OBJ		:= ${CPP:%.cpp=%.o}

CC		:= clang++
CCFLAGS	:= -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CCFLAGS} $^ -o $@

%.o: %.cpp
	${CC} ${CCFLAGS} -c $<

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
