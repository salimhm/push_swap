/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tmp_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:41:16 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/28 00:40:24 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tmp_arr(t_nb *stack_tmp)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < stack_tmp->size)
	{
		if (i == stack_tmp->size - 1)
			break ;
		if (stack_tmp->nb[i] > stack_tmp->nb[i + 1])
		{
			tmp = stack_tmp->nb[i];
			stack_tmp->nb[i] = stack_tmp->nb[i + 1];
			stack_tmp->nb[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
