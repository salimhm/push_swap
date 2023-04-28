/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:20:50 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/27 17:09:52 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_greatest(t_nb *stack_b)
{
	int	i;
	int	max;

	i = stack_b->lol;
	max = stack_b->nb[i];
	while (i < stack_b->size)
	{
		if (max < stack_b->nb[i])
			max = stack_b->nb[i];
		i++;
	}
	return (max);
}

int	find_index_max(t_nb *stack_a)
{
	int	i;
	int	max;

	i = stack_a->lol;
	max = find_greatest(stack_a);
	while (i < stack_a->size)
	{
		if (stack_a->nb[i] == max)
			return (i);
		i++;
	}
	return (0);
}

// int	find_next_big_num(int nb, t_nb *stack_a)
// {
// 	int	i;
// 	int	j;
// 	int	next_big_num;
// 	int	tmp_size;
// 	int	*tmp;

// 	i = 0;
// 	j = stack_a->lol;
// 	tmp_size = stack_a->size - stack_a->lol;
// 	tmp = malloc(tmp_size * sizeof(int));
// 	find_next_bing_num2(stack_a, tmp, tmp_size);
// 	next_big_num = find_next_bing_num3(tmp, tmp_size, nb);
// 	j = stack_a->lol;
// 	while (j < stack_a->size)
// 	{
// 		if (next_big_num == stack_a->nb[j])
// 		{
// 			free(tmp);
// 			return (j);
// 		}
// 		j++;
// 	}
// 	free(tmp);
// 	return (0);
// }

// int	find_min_score(t_op *operations, t_nb *stack_b)
// {
// 	int	i;
// 	int	tmp;

// 	i = 0;
// 	tmp = operations[0].sc;
// 	while (i < stack_b->size)
// 	{
// 		if (tmp > operations[i].sc)
// 			tmp = i;
// 		i++;
// 	}
// 	if (tmp == operations[0].sc)
// 		return (operations[0].indexx);
// 	else
// 		return (tmp);
// }
