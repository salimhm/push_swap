/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tmp_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:41:16 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/11 20:59:34 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tmp_arr(t_nb *stack_tmp)
{
	int	i;
	int	next;
	int	j;

	i = 1;
	while (i < stack_tmp->size)
	{
		next = stack_tmp->nb[i];
		j = i - 1;
		while (j >= 0 && stack_tmp->nb[j] > next)
		{
			stack_tmp->nb[j + 1] = stack_tmp->nb[j];
			j--;
		}
		stack_tmp->nb[j + 1] = next;
		i++;
	}

	// i = 0;
	// printf("------------------Sorted Stack------------------\n");
	// while(i < stack_tmp->size)
	// {
	// 	printf("%d\n", stack_tmp->nb[i]);
	// 	i++;
	// }
}
