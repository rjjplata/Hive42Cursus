NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = 	src/main.c		 				\
			src/ft_atol.c				\
			src/ft_strlen.c				\
			src/ft_strjoin.c			\
			src/ft_split.c				\
			src/array_check.c			\
			src/moves_1.c				\
			src/moves_2.c				\
			src/moves_3.c				\
			src/moves_4.c				\
			src/push.c					\
			src/rotate.c				\
			src/swap.c					\
			src/ft_strdup.c				\
		util/algo_2_num.c				\
			util/algo_3_num.c			\
			util/algo_4_up.c			\
			util/check_arg.c			\
			util/dup_to_algo.c			\
			util/get_max.c				\
			util/get_median.c			\
			util/get_min.c				\
			util/min_max_check.c		\
			util/quick_sort.c			\
			util/sort_check.c			\
			util/string_counter.c		\
			util/mixed_input.c			\
			util/push_and_sortb.c		\
			util/copy_array.c			\
			util/chunk_sort123.c		\
			util/chunk_sort4.c			\
			util/scan_chunk.c			\
			util/find_chunk_element.c	\
			util/final_sort.c			\

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
