/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:50:50 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/28 16:22:10 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "/Users/shmimi/pw/libft/libft.h"
# include "bonus/gnl/get_next_line.h"
# include <fcntl.h>
# include <unistd.h>

typedef struct s_list
{
	int	*nb;
	int	size;
	int	lol;
}		t_nb;

typedef struct t_op
{
	int	size;
	int	move_a;
	int	top_b;
	int	op_b;
	int	op_a;
	int	rb;
	int	ra;
	int	rrb;
	int	rra;
	int	best_score;
	int	value;
	int	sc;
	int	indexx;
	int	next_big_num;
}		t_op;

void	check_args(char *str);
void	check_args2(char *str, int j);
void	check_args2d(char **str);
void	check_args3(char *str, int j);
void	check_sorted(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp);
void	check_dup(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp);
int		find_smallest(t_nb *stack_a);
int		find_index_smallest(t_nb *stack_a);
int		find_greatest(t_nb *stack_b);

//stack A
void	sa(t_nb *stack_a);
void	ra(t_nb *stack_a);
void	rra(t_nb *stack_a);
void	pb(t_nb *stack_a, t_nb *stack_b);

//Stack B
void	sb(t_nb *stack_b);
void	rb(t_nb *stack_b);
void	rrb(t_nb *stack_b);
void	pa(t_nb *stack_a, t_nb *stack_b);

//Sorting
void	sort_three(t_nb *stack_a);
void	sort_four(t_nb *stack_a, t_nb *stack_b);
void	sort_five(t_nb *stack_a, t_nb *stack_b);
void	sort_all(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp);

//TMP Arr
void	push(t_nb *stack_a, t_nb *stack_tmp, int index);
void	sort_tmp_arr(t_nb *stack_tmp);

//Push To A After chunks
void	push_to_a(t_nb *stack_a, t_nb *stack_b);
int		calc_score(t_nb *stack_a, t_nb *stack_b, t_op *operations);
void	final_step(t_nb *stack_a);
void	push_to_a_2(int index, t_nb *stack_a, t_nb *stack_b, t_op *operations);

//Free
void	free2d(char **arg);
void	free_and_exit(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp,
			char **first);
void	free_all(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp);
void	free_and_exit_bonus(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp,
			char *input);

void	init(int ac, char **av);
void	fill_stacks(char **first);
void	fun(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, char **first);
int		ft_strlen2d(char **str);
void	sort_all2(t_nb *stack_a, t_nb *stack_b, int greatest, int tmp);
void	a_to_b_500(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, int chunks);
void	a_to_b_100(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, int chunks);
void	sort_all3(t_nb *stack_a, t_nb *stack_b, int greatest, int tmp);
void	sort_500(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, int chunks);
void	sort_100(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, int chunks);

void	find_next_bing_num2(t_nb *stack_a, int *tmp, int tmp_size);
int		find_next_bing_num3(int *tmp, int tmp_size, int nb);
void	init_to_zero(t_nb *stack_b, t_op *operations);
int		find_next_big_num(int nb, t_nb *stack_a);
void	case1(t_nb *stack_a, t_nb *stack_b, t_op *operations, int i);
void	case2(t_nb *stack_a, t_nb *stack_b, t_op *operations, int i);
void	case3(t_nb *stack_a, t_nb *stack_b, t_op *operations, int i);
void	case4(t_nb *stack_a, t_nb *stack_b, t_op *operations, int i);
void	cases(t_nb *stack_a, t_nb *stack_b, t_op *operations, int i);
int		find_min_score(t_op *operations, t_nb *stack_b);
void	sort_five2(t_nb *stack_a, t_nb *stack_b, int find_index_small);
void	sort_three2(t_nb *stack_a, int i);
void	fun2(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, char **first);
void	range(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, int interval);
void	calculate_distance(t_nb *stack_a, t_nb *stack_b);
void	error(int ac, char **av);

//Bonus
void	fill_stacks_bonus(char **first);
int		check_sorted_bonus(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp);
void	ra_bonus(t_nb *stack_a);
void	rra_bonus(t_nb *stack_a);
void	pb_bonus(t_nb *stack_a, t_nb *stack_b);
void	sa_bonus(t_nb *stack_a);
void	sb_bonus(t_nb *stack_b);
void	rb_bonus(t_nb *stack_b);
void	rrb_bonus(t_nb *stack_b);
void	pa_bonus(t_nb *stack_a, t_nb *stack_b);
void	ss_bonus(t_nb *stack_a, t_nb *stack_b);
void	rr_bonus(t_nb *stack_a, t_nb *stack_b);
void	rrr_bonus(t_nb *stack_a, t_nb *stack_b);
char	*ft_strjoin_bonus(char *s1, char *s2);
void	check_str(int ac, char **av, char *s1, char *str);
void	checker(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp);
void	checker2(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, char *input);

#endif
