/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:50:47 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/09 17:16:16 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen2d(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int		i;
	char	**first;
	t_nb	stack_a;
	t_nb	stack_b;
	t_nb	stack_tmp;

	if (ac > 1)
	{
		init(ac, av);
	}
}
