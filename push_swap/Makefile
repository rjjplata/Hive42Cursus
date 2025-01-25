NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -gdwarf-4

SRCS = $(wildcard src/*.c util/*.c)

OFILES = $(SRCS:.c=.o)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(SRCS) -Iincludes -o $(NAME)

all: $(NAME)

clean:
	@rm -rf src/*.o
	@rm -rf util/*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re