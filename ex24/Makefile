# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 14:00:10 by chrrodri          #+#    #+#              #
#    Updated: 2024/06/12 19:40:25 by chrrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_PATH = srcs/
SRC_NAME = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
HEADER = -Iincludes
OBJ = $(SRC:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: $(SRC_PATH)%.c
	gcc -Werror -Wall -Wextra $(HEADER) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all%      
