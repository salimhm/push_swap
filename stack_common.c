/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_common.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 23:02:57 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/08 20:44:15 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_nb *stack_a, t_nb *stack_b)
{
	int	i;
	int	temp_a;
	int	temp_b;

	i = 0;
	if (stack_a->size > 1 && stack_b->size > 1)
	{
		if (stack_a->nb[0] > stack_a->nb[1] && stack_b->nb[0] > stack_b->nb[1])
		{
			temp_a = stack_a->nb[i];
			stack_a->nb[0] = stack_a->nb[1];
			stack_a->nb[1] = temp_a;
			temp_b = stack_b->nb[i];
			stack_b->nb[0] = stack_b->nb[1];
			stack_b->nb[1] = temp_b;
		}
	}
}

// void	rr(t_nb *stack_a, t_nb *stack_b)
// {
// 	int	i;
// 	int	temp_a;
// 	int	temp_b;

// 	i = 0;
// 	if (stack_a->size > 1)
// 	{
// 		while (i < stack_a->size)
// 		{
// 			temp_a = stack_a->nb[i];
// 			stack_a->nb[i] = stack_a->nb[i + 1];
// 			stack_a->nb[i + 1] = temp_a;
// 			i++;
// 			if (i == stack_a->size - 1)
// 				break ;
// 		}
// 	}
// 	i = 0;
// 	if (stack_b->size > 1)
// 	{
// 		while (i < stack_b->size)
// 		{
// 			temp_b = stack_b->nb[i];
// 			stack_b->nb[i] = stack_b->nb[i + 1];
// 			stack_b->nb[i + 1] = temp_b;
// 			i++;
// 			if (i == stack_b->size - 1)
// 				break ;
// 		}
// 	}
// 	i = 0;
// 	while (i < stack_a->size)
// 	{
// 		ft_printf("%d\n", stack_a->nb[i]);
// 		i++;
// 	}
// }

// void	rrr(t_nb *stack_a, t_nb *stack_b)
// {
// 	int	i;
// 	int	j;
// 	int	*nb_a;
// 	int	*nb_b;

// 	i = 0;
// 	j = 1;
// 	nb_a = malloc(sizeof(int) * stack_a->size);
// 	if (stack_a->size > 1)
// 	{
// 		nb_a[0] = stack_a->nb[stack_a->size - 1];
// 		while (i < stack_a->size)
// 		{
// 			nb_a[j] = stack_a->nb[i];
// 			if (i == stack_a->size - 1)
// 				break ;
// 			i++;
// 			j++;
// 		}
// 	}
// 	i = 0;
// 	j = 1;
// 	nb_b = malloc(sizeof(int) * stack_b->size);
// 	if (stack_b->size > 1)
// 	{
// 		nb_b[0] = stack_b->nb[stack_b->size - 1];
// 		while (i < stack_b->size)
// 		{
// 			nb_b[j] = stack_b->nb[i];
// 			if (i == stack_b->size - 1)
// 				break ;
// 			i++;
// 			j++;
// 		}
// 	}
// 	i = 0;
// 	while (i < stack_a->size)
// 	{
// 		ft_printf("%d\n", nb_a[i]);
// 		i++;
// 	}
// }
