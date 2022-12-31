# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 16:32:53 by kturken           #+#    #+#              #
#    Updated: 2022/12/30 16:32:53 by kturken          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = include
LIBFT = libft
SRC_DIR = src/
OBJ_DIR = obj/
CC = gcc
CCFLAGS = -Wall -Wextra -Werror

SRC_FILES = ft_printf ft_print_basic ft_print_hex ft_print_ptr ft_print_uint

SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

all:		$(NAME)

$(NAME):	$(OBJ) $(LIBFT)
	ar rc $(NAME) $(OBJ)

$(OBJ):		$(OBJ_DIR)
	

$(LIBFT):
	make -C $(LIBFT)
	cp $(LIBFT) $(NAME)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CCFLAGS) -c $< 

clean:
	rm -rf $(OBJ_DIR)
	make clean -C $(LIBFT)

fclean:		clean
	rm -f $(NAME)
	rm -f $(LIBFT)/libft.a

re:			fclean all

.PHONY: all clean fclean re
