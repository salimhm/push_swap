/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tmp_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:41:16 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/08 20:41:14 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tmp_arr(t_nb *stack_tmp)
{
	int	i;
	int	tmp;
	int	key;
	int	j;

	i = 1;
	while (i < stack_tmp->size)
	{
		key = stack_tmp->nb[i];
		j = i - 1;
		while (j >= 0 && stack_tmp->nb[j] > key)
		{
			stack_tmp->nb[j + 1] = stack_tmp->nb[j];
			j--;
		}
		stack_tmp->nb[j + 1] = key;
		i++;
	}
}
