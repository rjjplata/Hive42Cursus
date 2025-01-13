NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = algorithm.c array_swap.c moves.c push_swap_main.c

OFILES = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar crs $(NAME) $(OFILES)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re