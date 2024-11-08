NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c  ft_putchar_fd.c ft_putstr_fd.c \
	ft_putnbr_fd.c ft_putendl_fd.c

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

.PHONY:  all clean fclean re
