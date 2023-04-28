/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:08:41 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/28 16:11:14 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sorted_bonus(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp)
{
	int	i;

	i = 0;
	if (stack_a->size == 1)
		return (1);
	while (i < stack_a->size)
	{
		if (stack_a->nb[i] < stack_a->nb[i + 1])
			i++;
		else
			return (0);
		if (i == stack_a->size - 1)
		{
			return (1);
		}
	}
	return (0);
}

void	rb_bonus(t_nb *stack_b)
{
	int	i;
	int	temp;

	i = stack_b->size - 1;
	if (stack_b->size > 1)
	{
		while (i > 0)
		{
			temp = stack_b->nb[i];
			stack_b->nb[i] = stack_b->nb[i - 1];
			stack_b->nb[i - 1] = temp;
			i--;
		}
	}
}

void	rrb_bonus(t_nb *stack_b)
{
	int	i;
	int	temp;

	i = stack_b->lol;
	if (stack_b->size > 1)
	{
		while (i < stack_b->size - 1)
		{
			temp = stack_b->nb[i];
			stack_b->nb[i] = stack_b->nb[i + 1];
			stack_b->nb[i + 1] = temp;
			i++;
		}
	}
}

void	pa_bonus(t_nb *stack_a, t_nb *stack_b)
{
	if (stack_b->size != 0)
	{
		stack_a->nb[stack_a->lol - 1] = stack_b->nb[stack_b->size - 1];
		stack_a->lol--;
		stack_b->size--;
	}
}

char	*ft_strjoin_bonus(char *s1, char *s2)
{
	char	*new_str;
	char	*str1;
	char	*str2;
	int		i;
	int		j;

	if (!s1)
		return (ft_strdup(s2));
	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	j = 0;
	if (!new_str)
		return (0);
	while (j < ft_strlen(str1))
	{
		new_str[j] = str1[j];
		j++;
	}
	while (i < ft_strlen(str2))
		new_str[j++] = str2[i++];
	new_str[j] = '\0';
	free(s1);
	return (new_str);
}
