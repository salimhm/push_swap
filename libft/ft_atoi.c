/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:14:29 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/28 00:42:32 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	check_test(long *result, int i, int *sign, char *nb)
{
	if (*result == 214748364 && (nb[i] - '0') == 8 && *sign == -1)
	{
		*result = 2147483648;
		return ;
	}
	else if ((*result > 2147483647 / 10) || (*result == 2147483647 / 10
			&& (nb[i] - '0') > 7))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	*result *= 10;
	if ((nb[i] >= '0' && nb[i] <= '9'))
		*result += nb[i] - '0';
}

static void	check(char *nb, int i, long *result, int *sign)
{
	while ((nb[i] >= '0' && nb[i] <= '9') || (nb[i] == '-' || nb[i] == '+'))
	{
		if (nb[i] == '-')
		{
			if (nb[i + 1] == '-' || nb[i + 1] == '+')
				break ;
			*sign = -1;
		}
		else if (nb[i] == '+')
		{
			if (nb[i + 1] == '-' || nb[i + 1] == '+')
				break ;
			*sign = 1;
		}
		check_test(result, i, sign, nb);
		i++;
	}
}

long	ft_atoi(char *str)
{
	int		sign;
	int		i;
	long	result;

	sign = 1;
	i = 0;
	result = 0;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == ' ')
		i++;
	check(str, i, &result, &sign);
	result = result * sign;
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
// 	int i = 0;
// 	int j = 1;
// 	while (i < 100)
// 	{
// 		if (atoi(av[j]) == ft_atoi(av[j]))
// 		{
// 			printf("%ld\n", ft_atoi(av[j]));
// 		}
// 		else
// 			printf("KO\n");
// 		i++;
// 		j++;
// 	}
// }