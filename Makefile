##
## Makefile for  in /home/zegher_a/my_printf
## 
## Made by alexis zeghers
## Login   <zegher_a@epitech.net>
## 
## Started on  Tue Nov 10 17:07:30 2015 alexis zeghers
## Last update Sun Nov 15 03:06:57 2015 alexis zeghers
##

CC	=	gcc

SRCS	=	my_printf.c \
		my_printf2.c \
		my_charcmp.c \
		my_put_uns.c \
		my_put_uns_bin.c \
		my_putchar.c \
		my_put_str.c \
		my_put_nbr.c \
		my_put_hex.c \
		my_put_majhex.c \
		my_put_minhex.c \
		my_put_unprint.c \
		my_put_oct.c \
		my_put_ptr.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Wall -Wextra -Werror -ansi -pedantic

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -c $(SRCS)
		ar rc $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
