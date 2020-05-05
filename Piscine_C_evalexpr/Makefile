##
## Makefile for Makefile in /home/leroy_0/rendu/Piscine_C_bistromathique
## 
## Made by maxime leroy
## Login   <leroy_0@epitech.net>
## 
## Started on  Wed Oct 28 13:45:12 2015 maxime leroy
## Last update Sun Nov  1 15:37:57 2015 maxime leroy
##

CC =	gcc

RM =	rm -f

CFLAGS +=	-Wextra -Wall

#CFLAGS += -ansi -pedantic

CFLAGS +=	-I./include

LDFLAGS =	-L./lib/ -lmy

NAME =	calc

SRCS =	calcul.c \
	calculate.c \
	replace.c \
	error.c \
	main.c \
	my_strnbr.c \
	my_strnbcpy.c \
	no_space.c \
	my_strnberase.c \
	my_strnbput.c

OBJS =	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
