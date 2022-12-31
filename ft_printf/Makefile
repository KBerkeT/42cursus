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

NAME		= libftprintf.a
INCLUDE		= include
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs

SRC_FILES	=	ft_printf ft_print_basic ft_print_ptr ft_print_uint ft_print_hex

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

all:		$(NAME)

$(NAME):	$(OBJ) $(OBJ_DIR)
			make -C $(LIBFT)
			cp libft/libft.a .
			mv libft.a $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
			mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
			$(RM) -rf $(OBJ_DIR)
			make clean -C $(LIBFT)

fclean:		clean
			$(RM) -f $(NAME)
			$(RM) -f $(LIBFT)/libft.a

re:			fclean all

.PHONY:		all clean fclean re