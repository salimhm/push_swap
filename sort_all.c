/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:06:39 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/27 17:07:09 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sort_all(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp)
// {
// 	int	i;
// 	int	chunks;

// 	i = stack_a->lol;
// 	chunks = stack_a->size / 3;
// 	if (stack_a->size == 500)
// 		sort_500(stack_a, stack_b, stack_tmp, chunks);
// 	else if (stack_a->size < 500)
// 		sort_100(stack_a, stack_b, stack_tmp, chunks);
// 	push_to_a(stack_a, stack_b);
// }

// int	calc_score(t_nb *stack_a, t_nb *stack_b, t_op *operations)
// {
// 	int	i;
// 	int	j;
// 	int	min;
// 	int	max;

// 	i = 0;
// 	j = stack_a->lol;
// 	init_to_zero(stack_b, operations);
// 	while (j < stack_a->size)
// 	{
// 		min = find_smallest(stack_a);
// 		max = find_greatest(stack_a);
// 		while (i < stack_b->size)
// 		{
// 			operations->next_big_num = find_next_big_num(stack_b->nb[i],
// 					stack_a);
// 			cases(stack_a, stack_b, operations, i);
// 			i++;
// 		}
// 		j++;
// 	}
// 	return (0);
// }

// void	push_to_a(t_nb *stack_a, t_nb *stack_b)
// {
// 	int		j;
// 	int		min_score;
// 	t_op	*operations;

// 	j = stack_a->lol;
// 	operations = (t_op *)malloc(stack_b->size * sizeof(t_op));
// 	operations->size = stack_b->size;
// 	while (stack_b->size)
// 	{
// 		calc_score(stack_a, stack_b, operations);
// 		min_score = find_min_score(operations, stack_b);
// 		push_to_a_2(min_score, stack_a, stack_b, operations);
// 	}
// 	free(operations);
// 	final_step(stack_a);
// }

// void	push_to_a_2(int index, t_nb *stack_a, t_nb *stack_b, t_op *operations)
// {
// 	while (operations[index].rb)
// 	{
// 		rb(stack_b);
// 		operations[index].rb--;
// 	}
// 	while (operations[index].ra)
// 	{
// 		ra(stack_a);
// 		operations[index].ra--;
// 	}
// 	while (operations[index].rrb)
// 	{
// 		rrb(stack_b);
// 		operations[index].rrb--;
// 	}
// 	while (operations[index].rra)
// 	{
// 		rra(stack_a);
// 		operations[index].rra--;
// 	}
// 	pa(stack_a, stack_b);
// }

// void	final_step(t_nb *stack_a)
// {
// 	int	i;
// 	int	max;

// 	i = 0;
// 	max = find_greatest(stack_a);
// 	while (i < stack_a->size)
// 	{
// 		if (stack_a->nb[i] == max)
// 		{
// 			if (i > stack_a->size / 2)
// 			{
// 				while (max != stack_a->nb[stack_a->size - 1])
// 					rra(stack_a);
// 			}
// 			else
// 				while (max != stack_a->nb[stack_a->size - 1])
// 					ra(stack_a);
// 		}
// 		i++;
// 	}
// }
