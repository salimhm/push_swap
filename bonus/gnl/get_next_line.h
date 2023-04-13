/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:11:59 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/13 02:45:40 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <unistd.h>
# include "../../libft/libft.h"
#include "../../push_swap.h"
// char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
// int		ft_strlen(char *str);
// char	*ft_strchr(char *s, int c);
// char	*ft_strdup(char *s1);

#endif