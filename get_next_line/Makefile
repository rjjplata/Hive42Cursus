NAME = ft_printf.a
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
	@echo "Compiling successful."
$(NAME): $(OFILES)
	ar crs $(NAME) $(OFILES)
%.o: %.crs
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f *.o ./src/*.o
	@echo "Binaries generated from sources deleted successfully."

fclean:
	@rm -f *.o ./src/*.o
	@rm -f $(NAME)
	@echo "All files produced by Makefile removed succesfully."

re: fclean all	
	@echo "Rebuilding successful."

.PHONY: all clean fclean re