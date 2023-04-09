/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:27:57 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/08 20:40:56 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_nb *stack_a)
{
	int		i;

	i = stack_a->lol;
	if (stack_a->nb[i] < stack_a->nb[i + 1] && stack_a->nb[i
			+ 1] < stack_a->nb[i + 2])
		return ;
	sort_three2(stack_a, i);
}

void	sort_three2(t_nb *stack_a, int i)
{
	if ((stack_a->nb[i] > stack_a->nb[i + 1] && stack_a->nb[i
				+ 1] < stack_a->nb[i + 2]
			&& stack_a->nb[i] < stack_a->nb[i + 2]))
		sa(stack_a);
	else if (stack_a->nb[i] > stack_a->nb[i + 1] && stack_a->nb[i
			+ 1] > stack_a->nb[i + 2])
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (stack_a->nb[i] > stack_a->nb[i + 2] && stack_a->nb[i
			+ 1] > stack_a->nb[i + 2])
	{
		rra(stack_a);
	}
	else if (stack_a->nb[i] > stack_a->nb[i + 1]
		&& stack_a->nb[i] > stack_a->nb[i + 2])
		ra(stack_a);
	else if (stack_a->nb[i] < stack_a->nb[i + 1]
		&& stack_a->nb[i] < stack_a->nb[i + 2])
	{
		sa(stack_a);
		ra(stack_a);
	}
}
