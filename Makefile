# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 18:45:20 by qcyril-a          #+#    #+#              #
#    Updated: 2025/02/12 19:02:58 by qcyril-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf \
lib_utils


CC = gcc
CFLAG = -Wall -Wextra -Werror
RM = rm -f

all:$(NAME)

$(NAME): $(SRC:=.o)
	ar rc $(NAME) $(SRC:=.o)

clean:
	$(RM)	$(SRC:=.o)

fclean: clean
	$(RM)	$(NAME)

re: clean all
