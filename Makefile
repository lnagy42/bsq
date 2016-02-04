# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnagy <lnagy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/24 21:46:48 by lnagy             #+#    #+#              #
#    Updated: 2016/01/24 21:46:49 by lnagy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = bsq

SRC = error.c \
	bsq.c \
	print.c \
	ft_strcpy.c \
	ft_strsub.c \
	ft_strsplit.c \
	ft_strjoin.c \
	ft_putstr.c \
	ft_atoi.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAG) -o $(NAME) $(OBJ)
	echo "$(NAME) created"

%.o: %.c
	gcc $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)
	echo "$(NAME) *.o removed"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed"

re: fclean all

push:
	@git add *
	@git commit -m fast_push
	@git push

.PHONY: all, clean, fclean, re
