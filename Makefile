CC		= 	cc

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
			ft_error2.c\

LIBFT	= 	make -C libft

NAME	= 	push_swap

RM		= 	rm -f

SRCS_BNS	=	bonus/checker.c\
				bonus/gnl/get_next_line.c\
				bonus/utils_bonus.c\
				bonus/instructions_bonus.c\
				bonus/instructions_bonus2.c\
				${filter-out push_swap.c, ${SRCS}}

NAME_BNS	=	checker

all: ${NAME}

${NAME}:		${SRCS}
				@echo "\033[0;32m"
				${LIBFT}
				@echo "\033[0;33m"
				${CC} ${CFLAGS} $^ -o $@ -Llibft -lft

${NAME_BNS}:	${SRCS_BNS}
				@echo "\033[0;32m"
				${LIBFT}
				@echo "\033[0;33m"
				${CC} $^ -o ${NAME_BNS} -Llibft -lft

bonus:  ${NAME_BNS}

clean:
			@echo "\033[1;31m"
			${LIBFT} clean

fclean:		clean
			@echo "\033[1;31m"
			${LIBFT} fclean
			${RM} ${NAME} ${NAME_BNS}

re: 		fclean all

.PHONY:	 all clean fclean re