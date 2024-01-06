# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbouizer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 00:18:29 by rbouizer          #+#    #+#              #
#    Updated: 2023/10/06 00:18:47 by rbouizer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

INCLUDES = includes

LIBFT = libft.a

CC = cc

CFILES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OFILES = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

all: $(LIBFT)

$(LIBFT): $(OFILES)
	ar -rc  $(LIBFT) $(OFILES)

%.o: %.c
	$(CC) $(FLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f *.a

re: fclean all
