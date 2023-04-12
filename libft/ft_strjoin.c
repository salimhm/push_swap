/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:15:37 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/12 02:22:12 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
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
	return (new_str);
}
