/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:50:47 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/11 01:17:00 by shmimi           ###   ########.fr       */
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

void	error(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ac)
	{
		while(av[i][j] == ' ')
		{
			j++;
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
			{
				write(2, "Error\n", 6);
				exit(1);
			}
		}
		if (ft_strlen(av[i]) == 0)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		error(ac, av);
		init(ac, av);
	}
}
