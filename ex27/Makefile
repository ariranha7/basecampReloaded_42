# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 06:29:33 by didos-re          #+#    #+#              #
#    Updated: 2022/04/03 06:29:35 by didos-re         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Werror -Wextra
CC		= gcc
RM		= rm -f

NAME	= ft_display_file

SRCDIR	= srcs
INCDIR	= includes

SRCS	= $(SRCDIR)/ft_putchar.c		\
		$(SRCDIR)/ft_putstr.c			\
		$(SRCDIR)/ft_display_file.c		\
		main.c
OBJS	= $(SRCS:.c=.o)

all:		$(NAME)

%.o:%.c
			$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY: re fclean clean all