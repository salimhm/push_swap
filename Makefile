CC		= 	gcc

CFLAGS	= 	-Wall -Wextra -Werror

SRCS	= 	push_swap.c\
			ft_error.c\
			stack_a.c\
			stack_b.c\
			sort_three.c\
			check_sorted.c\
		  	sort_five.c\
			sort_four.c\
			sort_all.c\
			sort_tmp_arr.c\
			free.c\
			init.c\
			sort_all2.c\
		  	sort_all_extended.c\
			sort_all3.c\
			utils.c\
			sort_five2.c\
			range.c\

LIBFT	= 	make -C libft

NAME	= 	push_swap

RM		= 	rm -f

all: ${NAME}

${NAME}:	${SRCS}
			@echo "\033[0;32m"
			${LIBFT}
			@echo "\033[0;33m"
			${CC} ${CFLAGS} $^ -o $@ -Llibft -lft

clean:
			@echo "\033[1;31m"
			${LIBFT} clean

fclean:		clean
			@echo "\033[1;31m"
			${LIBFT} fclean
			${RM} ${NAME}

re: 		fclean all

.PHONY:	 all clean fclean re