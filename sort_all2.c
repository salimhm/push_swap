/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:21:47 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/08 18:44:18 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_all2(t_nb *stack_a, t_nb *stack_b, int greatest, int tmp)
{
	while (tmp < stack_a->size)
	{
		if (stack_a->nb[stack_a->lol] == greatest)
		{
			ra(stack_a);
			if (tmp == stack_a->size - 1)
			{
				pa(stack_a, stack_b);
				break ;
			}
		}
		pb(stack_a, stack_b);
		tmp++;
	}
}

void	a_to_b_500(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, int chunks)
{
	if (stack_a->nb[stack_a->lol] >= stack_tmp->nb[0]
		&& stack_a->nb[stack_a->lol] <= stack_tmp->nb[chunks])
		pb(stack_a, stack_b);
	else if (stack_a->nb[stack_a->lol] > stack_tmp->nb[chunks]
		&& stack_a->nb[stack_a->lol] <= stack_tmp->nb[chunks * 2])
	{
		pb(stack_a, stack_b);
		rb(stack_b);
	}
	else
		ra(stack_a);
}

void	a_to_b_100(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, int chunks)
{
	if (stack_a->nb[stack_a->lol] >= stack_tmp->nb[0]
		&& stack_a->nb[stack_a->lol] <= stack_tmp->nb[chunks])
		pb(stack_a, stack_b);
	else if (stack_a->nb[stack_a->lol] > stack_tmp->nb[chunks]
		&& stack_a->nb[stack_a->lol] <= stack_tmp->nb[chunks * 2])
	{
		pb(stack_a, stack_b);
		rb(stack_b);
	}
	else if (stack_a->nb[stack_a->lol] > stack_tmp->nb[chunks * 2]
		&& stack_a->nb[stack_a->lol] <= stack_tmp->nb[chunks * 3])
		ra(stack_a);
}

void	sort_all3(t_nb *stack_a, t_nb *stack_b, int greatest, int tmp)
{
	while (tmp < stack_a->size)
	{
		if (stack_a->nb[stack_a->lol] == greatest)
		{
			ra(stack_a);
			if (tmp == stack_a->size - 1)
			{
				pa(stack_a, stack_b);
				break ;
			}
		}
		pb(stack_a, stack_b);
		tmp++;
	}
}
