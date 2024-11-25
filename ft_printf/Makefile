NAME = libft_printf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC =	ft_format.c ft_printf.c \
		./src/ft_digit.c \
		./src/ft_hexaupper.c \
		./src/ft_pointer.c \
		./src/ft_putchar.c \
		./src/ft_putstr.c

OFILES = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar crs $(NAME) $(OFILES)
%.o: %.crs
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f *.o ./src/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re