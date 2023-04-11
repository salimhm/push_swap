/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all_extended.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:37:37 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/10 21:56:34 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_500(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, int chunks)
{
	int	greatest;
	int	tmp;
	int	i;

	i = 0;
	while (i < stack_a->size)
	{
		a_to_b_500(stack_a, stack_b, stack_tmp, chunks);
		i++;
		if (i == stack_a->size)
		{
			greatest = find_greatest(stack_a);
			tmp = stack_a->lol;
			if (stack_a->lol == stack_a->size)
			{
				pa(stack_a, stack_b);
				pa(stack_a, stack_b);
				break ;
			}
			sort_all2(stack_a, stack_b, greatest, tmp);
		}
	}
}

void	sort_100(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, int chunks)
{
	int	greatest;
	int	tmp;
	int	i;

	i = 0;
	while (i < stack_a->size)
	{
		a_to_b_100(stack_a, stack_b, stack_tmp, chunks);
		i++;
		if (i == stack_a->size)
		{
			greatest = find_greatest(stack_a);
			tmp = stack_a->lol;
			if (stack_a->lol == stack_a->size)
			{
				pa(stack_a, stack_b);
				pa(stack_a, stack_b);
				break ;
			}
			sort_all3(stack_a, stack_b, greatest, tmp);
		}
	}
}

void	find_next_bing_num2(t_nb *stack_a, int *tmp, int tmp_size)
{
	int	i;
	int	j;
	int	next;

	i = 0;
	j = stack_a->lol;
	while (i < tmp_size)
		tmp[i++] = stack_a->nb[j++];
	i = 1;
	while (i < tmp_size)
	{
		next = tmp[i];
		j = i - 1;
		while (j >= 0 && tmp[j] > next)
		{
			tmp[j + 1] = tmp[j];
			j--;
		}
		tmp[j + 1] = next;
		i++;
	}
}

int	find_next_bing_num3(int *tmp, int tmp_size, int nb)
{
	int		i;
	int		next_big_num;

	i = 0;
	while (i < tmp_size)
	{
		if (nb < tmp[i])
		{
			next_big_num = tmp[i];
			return (next_big_num);
		}
		i++;
	}
	return (0);
}
