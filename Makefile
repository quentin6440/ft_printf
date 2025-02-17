# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 18:45:20 by qcyril-a          #+#    #+#              #
#    Updated: 2025/02/17 15:42:40 by qcyril-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf \
ft_printc_fd \
ft_prints_fd \
ft_printu_fd \
ft_printi_fd \
ft_printhex_fd \
ft_printp_fd

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
