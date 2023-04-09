/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:47:54 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/09 02:00:14 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_nb *stack_a)
{
	int	i;
	int	temp;

	i = 0;
	if (stack_a->size > 1)
	{
		temp = stack_a->nb[stack_a->lol];
		stack_a->nb[stack_a->lol] = stack_a->nb[stack_a->lol + 1];
		stack_a->nb[stack_a->lol + 1] = temp;
	}
	write(1, "sa\n", 3);
}

void	ra(t_nb *stack_a)
{
	int	i;
	int	temp;

	i = stack_a->lol;
	if (stack_a->size > 1)
	{
		while (i < stack_a->size - 1)
		{
			temp = stack_a->nb[i];
			stack_a->nb[i] = stack_a->nb[i + 1];
			stack_a->nb[i + 1] = temp;
			i++;
		}
	}
	write(1, "ra\n", 3);
}

void	rra(t_nb *stack_a)
{
	int	i;
	int	j;
	int	temp;

	i = stack_a->size - 1;
	j = 1;
	if (stack_a->size > 1)
	{
		while (i > stack_a->lol)
		{
			temp = stack_a->nb[i];
			stack_a->nb[i] = stack_a->nb[i - 1];
			stack_a->nb[i - 1] = temp;
			i--;
			if (i == 0)
				break ;
		}
	}
	write(1, "rra\n", 4);
}

void	pb(t_nb *stack_a, t_nb *stack_b)
{
	stack_b->nb[stack_b->size] = stack_a->nb[stack_a->lol];
	stack_b->size++;
	stack_a->lol++;
	write(1, "pb\n", 3);
}
