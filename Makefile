# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayou <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 09:38:31 by gmayou            #+#    #+#              #
#    Updated: 2019/05/21 14:31:14 by gmayou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJECTS = *.o
FLAGS = -Wall -Werror -Wextra
OPTIONS = -c -I.
CLEAN = /bin/rm -f
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	$(CLEAN) $(OBJECTS)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all
