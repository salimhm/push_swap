/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:09:05 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/09 20:52:35 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(int ac, char **av)
{
	char	*str;
	char	*s1;
	int		i;
	char	**first;

	i = 2;
	str = av[1];
	while (i < ac)
	{
		s1 = ft_strjoin(str, " ");
		if (i > 2)
			free(str);
		str = ft_strjoin(s1, av[i]);
		free(s1);
		i++;
	}
	check_args(str);
	first = ft_split(str, ' ');
	if (i != 2)
		free(str);
	check_args2d(first);
	fill_stacks(first);
}

void	fill_stacks(char **first)
{
	int		i;
	t_nb	stack_a;
	t_nb	stack_b;
	t_nb	stack_tmp;

	stack_a.nb = malloc(sizeof(int) * ft_strlen2d(first));
	stack_a.size = ft_strlen2d(first);
	stack_a.lol = 0;
	stack_b.nb = malloc(sizeof(int) * ft_strlen2d(first));
	stack_b.size = 0;
	stack_b.lol = 0;
	stack_tmp.nb = malloc(sizeof(int) * ft_strlen2d(first));
	stack_tmp.size = ft_strlen2d(first);
	i = 0;
	while (i < stack_a.size)
	{
		stack_a.nb[i] = ft_atoi(first[i]);
		stack_tmp.nb[i] = ft_atoi(first[i]);
		i++;
	}
	check_dup(&stack_a, &stack_b, &stack_tmp);
	check_sorted(&stack_a, &stack_b, &stack_tmp);
	fun(&stack_a, &stack_b, &stack_tmp, first);
}

void	fun(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, char **first)
{
	if (stack_a->size == 1)
		free_and_exit(stack_a, stack_b, stack_tmp, first);
	if (stack_a->size == 2 && stack_a->nb[0] > stack_a->nb[1])
	{
		sa(stack_a);
		free_and_exit(stack_a, stack_b, stack_tmp, first);
	}
	if (stack_a->size == 3)
	{
		sort_three(stack_a);
		free_and_exit(stack_a, stack_b, stack_tmp, first);
	}
	if (stack_a->size == 4)
	{
		sort_four(stack_a, stack_b);
		free_and_exit(stack_a, stack_b, stack_tmp, first);
	}
	fun2(stack_a, stack_b, stack_tmp, first);
}

void	fun2(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, char **first)
{
	if (stack_a->size == 5)
	{
		sort_five(stack_a, stack_b);
		free_and_exit(stack_a, stack_b, stack_tmp, first);
	}
	if (stack_a->size >= 6)
	{
		sort_tmp_arr(stack_tmp);
		sort_all(stack_a, stack_b, stack_tmp);
		free_and_exit(stack_a, stack_b, stack_tmp, first);
	}
}

void	init_to_zero(t_nb *stack_b, t_op *operations)
{
	int		i;

	i = 0;
	while (i < stack_b->size)
	{
		operations[i].ra = 0;
		operations[i].rb = 0;
		operations[i].rra = 0;
		operations[i].rrb = 0;
		operations[i].sc = 0;
		operations[i].indexx = 0;
		i++;
	}
}
