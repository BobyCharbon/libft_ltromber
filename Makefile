# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kingtringer <kingtringer@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 11:13:30 by fvarrin           #+#    #+#              #
#    Updated: 2021/11/08 15:19:21 by kingtringer      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ROOT_DIR	?= $(shell pwd)
SRC_DIR		= ${ROOT_DIR}/src/
HEADER_DIR 	= ${ROOT_DIR}/src/include/
SRC		= $(addprefix ${SRC_DIR}, ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		  	ft_strlcpy.c)
OBJ		= $(SRC:.c=.o);
CC 		= gcc
AR 		= ar rc
NAME 		= libft.a
NORM_BIN	= norminette
NORM_FLAGS	= -RCheckForbiddenSourceHeader -RCheckDefine
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror -I${HEADER_DIR}

.PHONY: 	all clean fclean re

${NAME}:	${OBJ}
		${AR} ${NAME} ${OBJ}

all: 		${NAME}

clean:
		${RM} ${OBJ}

fclean: 	clean
		${RM} ${NAME}

re:		fclean ${NAME}

lint:		fclean
		${NORM_BIN} ${NORM_FLAGS}