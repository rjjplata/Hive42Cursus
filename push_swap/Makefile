NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = 	src/main.c		 			\
			src/ft_atol.c			\
			src/ft_putchar.c		\
			src/ft_strlen.c			\
			src/ft_strjoin.c		\
			src/ft_split.c			\
			src/array_check.c		\
			src/moves_1.c			\
			src/moves_2.c			\
			src/moves_3.c			\
			src/moves_4.c			\
			src/push.c				\
			src/rotate.c			\
			src/swap.c				\
		util/algo_2_num.c			\
			util/algo_3_num.c		\
			util/algo_4_up.c		\
			util/check_arg.c		\
			util/dupe_checker.c		\
			util/get_max.c			\
			util/get_median.c		\
			util/get_min.c			\
			util/min_max_check.c	\
			util/quick_sort.c		\
			util/sort_check.c		\
			util/string_counter.c	\
			util/mixed_input.c		\

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
