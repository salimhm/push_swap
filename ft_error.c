/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:23:48 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/28 00:20:19 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if ((str[j] && str[j] == '+' && (str[j + 1] == '+' || str[j
						+ 1] == '-')) || (str[j] && str[j] == '-' && (str[j
						+ 1] == '-' || str[j + 1] == '+')))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		if ((str[j] == '+' && (str[j + 1] == ' ' || str[j + 1] == '\0'))
			|| (str[j] == '-' && (str[j + 1] == ' ' || str[j + 1] == '\0')))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		check_args3(str, j);
		j++;
	}
}

void	check_args2d(char **str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (ft_atoi(str[j]) < -2147483648 || ft_atoi(str[j]) > 2147483647)
		{
			write(2, "Error\n", 6);
			free2d(str);
			exit(1);
		}
		j++;
	}
}

void	check_dup(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < stack_a->size)
	{
		while (j < stack_a->size)
		{
			if (stack_a->nb[i] != stack_a->nb[j])
				j++;
			else if (stack_a->nb[i] == stack_a->nb[j])
			{
				write(2, "Error\n", 6);
				free(stack_a->nb);
				free(stack_b->nb);
				free(stack_tmp->nb);
				exit(1);
			}
		}
		i++;
		j = i + 1;
	}
}

void	check_args3(char *str, int j)
{
	if ((str[j] >= '0' && str[j] <= '9') && (str[j + 1] == '+' || str[j
				+ 1] == '-'))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if ((str[j] > 57 && str[j] <= 127) || (str[j] >= 0 && str[j] <= 31)
		|| (str[j] >= 33 && str[j] <= 42) || (str[j] >= 46 && str[j] <= 47)
		|| str[j] == 44)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}
