/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:35:10 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/28 00:55:14 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <fcntl.h>
#include <stdio.h>

void	check_str(int ac, char **av, char *s1, char *str)
{
	int		i;
	char	**first;

	i = 2;
	str = av[1];
	while (i < ac)
	{
		s1 = ft_strjoin_bonus(ft_strdup(str), " ");
		if (i > 2)
			free(str);
		str = ft_strjoin_bonus(s1, av[i]);
		i++;
	}
	check_args(str);
	first = ft_split(str, ' ');
	if (i != 2)
		free(str);
	check_args2d(first);
	fill_stacks_bonus(first);
}

void	fill_stacks_bonus(char **first)
{
	t_nb	stack_a;
	t_nb	stack_b;
	t_nb	stack_tmp;
	int		i;

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
	checker(&stack_a, &stack_b, &stack_tmp);
	check_dup(&stack_a, &stack_b, &stack_tmp);
}

void	checker(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp)
{
	char	*input;

	input = get_next_line(0);
	while (input)
	{
		checker2(stack_a, stack_b, stack_tmp, input);
		free(input);
		input = get_next_line(0);
	}
	if (check_sorted_bonus(stack_a, stack_b, stack_tmp) && stack_b->size == 0)
	{
		write(1, "OK\n", 3);
		free(input);
		free(stack_a->nb);
		free(stack_b->nb);
		free(stack_tmp->nb);
		exit(0);
	}
	else
	{
		write(2, "KO\n", 3);
		free(input);
		exit(1);
	}
}

void	checker2(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, char *input)
{
	if (ft_strncmp(input, "ra", 2) == 0 && ft_strlen(input) == 3)
		ra_bonus(stack_a);
	else if (ft_strncmp(input, "rb", 2) == 0 && ft_strlen(input) == 3)
		rb_bonus(stack_b);
	else if (ft_strncmp(input, "rra", 3) == 0 && ft_strlen(input) == 4)
		rra_bonus(stack_a);
	else if (ft_strncmp(input, "rrb", 3) == 0 && ft_strlen(input) == 4)
		rrb_bonus(stack_b);
	else if (ft_strncmp(input, "sa", 2) == 0 && ft_strlen(input) == 3)
		sa_bonus(stack_a);
	else if (ft_strncmp(input, "sb", 2) == 0 && ft_strlen(input) == 3)
		sb_bonus(stack_b);
	else if (ft_strncmp(input, "pa", 2) == 0 && ft_strlen(input) == 3)
		pa_bonus(stack_a, stack_b);
	else if (ft_strncmp(input, "pb", 2) == 0 && ft_strlen(input) == 3)
		pb_bonus(stack_a, stack_b);
	else if (ft_strncmp(input, "ss", 2) == 0 && ft_strlen(input) == 3)
		ss_bonus(stack_a, stack_b);
	else if (ft_strncmp(input, "rr", 2) == 0 && ft_strlen(input) == 3)
		rr_bonus(stack_a, stack_b);
	else if (ft_strncmp(input, "rrr", 3) == 0 && ft_strlen(input) == 4)
		rrr_bonus(stack_a, stack_b);
	else
		free_and_exit_bonus(stack_a, stack_b, stack_tmp, input);
}

int	main(int ac, char **av)
{
	char	*str;
	char	*s1;
	int		i;

	if (ac > 1)
	{
		error(ac, av);
		check_str(ac, av, s1, str);
	}
}
