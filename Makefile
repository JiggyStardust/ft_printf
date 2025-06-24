# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/21 10:50:52 by sniemela          #+#    #+#              #
#    Updated: 2025/06/24 14:23:09 by sniemela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
	   ft_putnbr.c \
	   ft_puthexadec.c

CFLAGS = -Wall -Werror -Wextra

CC = cc

OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	ar rcs $@ $^

all: $(NAME)

tester: $(NAME) main_test.c
	$(CC) $(CFLAGS) main_test.c -L. -lftprintf -o tester


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) tester

re: fclean all

.PHONY: all clean fclean re
