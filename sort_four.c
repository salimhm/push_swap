/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 04:13:24 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/08 20:37:00 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_nb *stack_a, t_nb *stack_b)
{
	int		smallest_index;

	smallest_index = find_index_smallest(stack_a);
	if (smallest_index == 0)
	{
		pb(stack_a, stack_b);
	}
	else if (smallest_index == 1)
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if (smallest_index == 2)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (smallest_index == 3)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	sort_three(stack_a);
	pa(stack_a, stack_b);
}
