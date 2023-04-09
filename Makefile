CC			=	gcc

CFLAGS  	=	-Wall -Wextra -Werror

OBJS		=	${SRCS:.c=.o}

SRCS		=	push_swap.c\
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
				

libft		=	make -C libft 

NAME		=	push_swap

RM			=	rm -f

%.o : %.c 
	${CC}  -c $< -o $@

all: ${NAME}

${NAME}:	${OBJS}
			@echo "\033[0;32m"
			${libft}
			@echo "\033[0;33m"
			${CC} ${CFLAGS} ${OBJS} libft/libft.a -o ${NAME}


clean:
		@echo "\033[1;31m"
		${libft} clean
		${RM} ${OBJS}

fclean:	clean
		@echo "\033[1;31m"
		${libft} fclean
		${RM} ${NAME}

re:		fclean all
