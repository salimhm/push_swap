/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 04:29:51 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/13 04:33:37 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra_bonus(t_nb *stack_a)
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
}

void	rra_bonus(t_nb *stack_a)
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
}

void	pb_bonus(t_nb *stack_a, t_nb *stack_b)
{
	stack_b->nb[stack_b->size] = stack_a->nb[stack_a->lol];
	stack_b->size++;
	stack_a->lol++;
}

void	sa_bonus(t_nb *stack_a)
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
}

void	sb_bonus(t_nb *stack_b)
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
