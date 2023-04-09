/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:14:29 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/09 22:31:36 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	check(char *nb, int i, long *result, int *sign)
{
	while ((nb[i] >= '0' && nb[i] <= '9') || (nb[i] == '-' || nb[i] == '+'))
	{
		if (nb[i] == ' ')
			i++;
		if (nb[i] == '-')
		{
			if (nb[i + 1] == '-' || nb[i + 1] == '+' || (nb[i - 1] >= '0'
					&& nb[i - 1] <= '9'))
				break ;
			*sign = -1;
			i++;
		}
		if (nb[i] == '+')
		{
			if (nb[i + 1] == '-' || nb[i + 1] == '+' || (nb[i - 1] >= '0'
					&& nb[i - 1] <= '9'))
				break ;
			*sign = 1;
			i++;
		}
		*result *= 10;
		if ((nb[i] >= '0' && nb[i] <= '9'))
			*result += nb[i] - '0';
		i++;
	}
}

long	ft_atoi(char *str)
{
	char	*nb;
	int		sign;
	int		i;
	long	result;

	nb = (char *)str;
	sign = 1;
	i = 0;
	result = 0;
	while ((nb[i] >= 8 && nb[i] <= 13) || nb[i] == ' ')
		i++;
	check(nb, i, &result, &sign);
	if (result == -1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	result = result * sign;
	return (result);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	printf("%ld\n", ft_atoi(av[1]));
// }