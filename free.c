/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 03:06:53 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/09 17:16:01 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free2d(char **arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		free(arg[i]);
		arg[i] = NULL;
		i++;
	}
	free(arg);
	arg = NULL;
}

void	free_and_exit(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp,
		char **first)
{
	free2d(first);
	free(stack_a->nb);
	free(stack_b->nb);
	free(stack_tmp->nb);
	exit(0);
}
