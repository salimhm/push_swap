/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:52:04 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/08 20:31:27 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_smallest(t_nb *stack_a)
{
	int	i;
	int	tmp;

	i = stack_a->lol;
	tmp = stack_a->nb[i];
	while (i < stack_a->size)
	{
		if (tmp > stack_a->nb[i])
		{
			tmp = stack_a->nb[i];
		}
		i++;
	}
	return (tmp);
}

int	find_index_smallest(t_nb *stack_a)
{
	int	i;
	int	smallest;

	i = stack_a->lol;
	smallest = find_smallest(stack_a);
	while (i < stack_a->size)
	{
		if (stack_a->nb[i] == smallest)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

void	check_smallest_five(t_nb *stack_a, t_nb *stack_b, int find_index_small)
{
	int	i;

	if (find_index_small < 2)
	{
		if (stack_a->nb[0] == stack_a->nb[find_index_small])
		{
			pb(stack_a, stack_b);
			return ;
		}
		else if (stack_a->nb[0] > stack_a->nb[1])
		{
			ra(stack_a);
			pb(stack_a, stack_b);
			return ;
		}
	}
	sort_five2(stack_a, stack_b, find_index_small);
}

void	check_smallest_four(t_nb *stack_a, t_nb *stack_b, int find_index_small)
{
	int	i;

	i = find_index_small;
	if (find_index_small == 1)
	{
		pb(stack_a, stack_b);
	}
	else if (find_index_small == 2)
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if (find_index_small == 3)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (find_index_small == 4)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
}

void	sort_five(t_nb *stack_a, t_nb *stack_b)
{
	int	i;
	int	smallest;

	i = 0;
	smallest = find_smallest(stack_a);
	check_smallest_five(stack_a, stack_b, find_index_smallest(stack_a));
	check_smallest_four(stack_a, stack_b, find_index_smallest(stack_a));
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
