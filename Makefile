# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/23 16:07:10 by tbazire           #+#    #+#              #
#    Updated: 2015/01/14 16:55:52 by tbazire          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC   = /usr/bin/gcc
CFL  = -Wall -Werror -Wextra
LFL  = -I .

SRCF = $(shell ls -1R $(SRCD) | grep \.c)

SRC  = $(addprefix $(SRCD)/, $(SRCF))
OBJ  = $(addprefix $(OBJD)/, $(SRC:.c=.o))

SRCD = .
OBJD = .obj

all: $(NAME)

$(addprefix $(OBJD)/, %.o): %.c
	$(CC) $(CFL) -o $@ -c $< $(LFL)

$(NAME): $(OBJD) $(OBJ)
	ar rc $@ $(OBJ)
	ranlib $@

$(OBJD):
	/bin/mkdir -p $@/$(SRCD)

clean:
	/bin/rm -fr $(OBJD)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
