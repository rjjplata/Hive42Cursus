NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = 

all: $(NAME)

$(NAME): $(OFILES)
	ar crs $(NAME) $(OFILES)
%.o: %.crs
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re