CC = gcc

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC =ft_puthex.c  ft_printf.c ft_putadr.c ft_putchar.c ft_putint.c  ft_putstr.c ft_putuint.c ft_strlen.c 

OBJ =$(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) ft_printf.h
	ar rcs $@ $^

%.o : %.c ft_printf.h
	$(CC) -c $< -o $@ $(FLAGS)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
