/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:05:58 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/08 20:31:49 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five2(t_nb *stack_a, t_nb *stack_b, int find_index_small)
{
	if (find_index_small == 2)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
		return ;
	}
	if (find_index_small > 2 && find_index_small < stack_a->size - 1)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
		return ;
	}
	if (find_index_small == stack_a->size - 1)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
		return ;
	}
}
