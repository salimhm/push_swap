/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:51:10 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/09 03:52:52 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sorted(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp)
{
	int		i;

	i = 0;
	while (i < stack_a->size && stack_a->nb[i] < stack_a->nb[i + 1])
	{
		i++;
		if (i == stack_a->size - 1)
		{
			free(stack_a->nb);
			free(stack_b->nb);
			free(stack_tmp->nb);
			exit(0);
		}
	}
}

void	check_sort(t_nb *stack_a)
{
	int	i;

	i = 0;
	while (i < stack_a->size)
	{
		if (i == stack_a->size - 1)
			break ;
		if (stack_a->nb[0] > stack_a->nb[1])
			sa(stack_a);
		if (stack_a->nb[i] > stack_a->nb[i + 1])
		{
			rra(stack_a);
			i = 0;
		}
		i++;
	}
}
