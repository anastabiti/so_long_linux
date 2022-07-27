# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/13 08:46:24 by atabiti           #+#    #+#              #
#    Updated: 2022/07/27 18:34:52 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CFLAGS = -Wall -Werror -Wextra
SRC =  so_long.c  tools2.c tools.c get_next_line.c get_next_line_utils.c \
	f1.c f2.c f3.c ft_deal_key.c ft_key_pressed.c ft_error.c   ft_key_pressed2.c ft_movements.c ft4.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		gcc $(OBJ) -o $(NAME) /usr/local/lib/libmlx.a -lXext -lX11 

clean :
		rm -f *.o

fclean : clean
		 rm so_long

re : fclean all