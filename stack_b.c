/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:56:48 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/09 02:01:17 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_nb *stack_b)
{
	int	i;
	int	temp;

	i = stack_b->size - 1;
	if (stack_b->size > 1)
	{
		temp = stack_b->nb[i];
		stack_b->nb[i] = stack_b->nb[i - 1];
		stack_b->nb[i - 1] = temp;
	}
}

void	rb(t_nb *stack_b)
{
	int	i;
	int	temp;

	i = stack_b->size - 1;
	if (stack_b->size > 1)
	{
		while (i > 0)
		{
			temp = stack_b->nb[i];
			stack_b->nb[i] = stack_b->nb[i - 1];
			stack_b->nb[i - 1] = temp;
			i--;
		}
	}
	write(1, "rb\n", 3);
}

void	rrb(t_nb *stack_b)
{
	int	i;
	int	temp;

	i = stack_b->lol;
	if (stack_b->size > 1)
	{
		while (i < stack_b->size - 1)
		{
			temp = stack_b->nb[i];
			stack_b->nb[i] = stack_b->nb[i + 1];
			stack_b->nb[i + 1] = temp;
			i++;
		}
	}
	write(1, "rrb\n", 4);
}

void	pa(t_nb *stack_a, t_nb *stack_b)
{
	stack_a->nb[stack_a->lol - 1] = stack_b->nb[stack_b->size - 1];
	stack_a->lol--;
	stack_b->size--;
	write(1, "pa\n", 3);
}
