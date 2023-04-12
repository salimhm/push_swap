/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:35:10 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/12 23:27:18 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char **av)
{
    char *str;
    char *s1;
    int i;
    char **first;
    t_nb stack_a;
    t_nb stack_b;
    t_nb stack_tmp;
    int is_sorted;

    if (ac > 1)
    {
        error(ac, av);
        i = 2;
        str = av[1];
        while (i < ac)
        {
            s1 = ft_strjoin(str, " ");
            if (i > 2)
                free(str);
            str = ft_strjoin(s1, av[i]);
            free(s1);
            i++;
        }
        check_args(str);
        first = ft_split(str, ' ');
        if (i != 2)
            free(str);
        check_args2d(first);
        fill_stacks_bonus(&stack_a, &stack_b, &stack_tmp, first);
        check_dup(&stack_a, &stack_b, &stack_tmp);
        char *input = get_next_line(0);
        while (input)
        {
            if (ft_strncmp(input, "ra", 2) == 0 && ft_strlen(input) == 3)
                ra_bonus(&stack_a);
            else if (ft_strncmp(input, "rb", 2) == 0 && ft_strlen(input) == 3)
                rb_bonus(&stack_b);
            else if (ft_strncmp(input, "rra", 3) == 0 && ft_strlen(input) == 4)
                rra_bonus(&stack_a);
            else if (ft_strncmp(input, "rrb", 3) == 0 && ft_strlen(input) == 4)
                rrb_bonus(&stack_b);
            else if (ft_strncmp(input, "sa", 2) == 0 && ft_strlen(input) == 3)
                sa_bonus(&stack_a);
            else if (ft_strncmp(input, "sb", 2) == 0 && ft_strlen(input) == 3)
                sb_bonus(&stack_b);
            else if (ft_strncmp(input, "pa", 2) == 0 && ft_strlen(input) == 3)
                pa_bonus(&stack_a, &stack_b);
            else if (ft_strncmp(input, "pb", 2) == 0 && ft_strlen(input) == 3)
                pb_bonus(&stack_a, &stack_b);
            else if (ft_strncmp(input, "ss", 2) == 0 && ft_strlen(input) == 3)
                ss_bonus(&stack_a, &stack_b);
            else if (ft_strncmp(input, "rr", 2) == 0 && ft_strlen(input) == 3)
                rr_bonus(&stack_a, &stack_b);
            else if (ft_strncmp(input, "rrr", 3) == 0 && ft_strlen(input) == 4)
                rrr_bonus(&stack_a, &stack_b);
            else
            {
                write(2, "Error\n", 6);
                exit(1);
            }
            input = get_next_line(0);
            free(input);
        }
        if (check_sorted_bonus(&stack_a, &stack_b, &stack_tmp) && stack_b.size == 0)
        {
            write(1, "OK\n", 3);
            free(input);
            exit(0);
        }
        else
        {
            write(2, "KO\n", 3);
            free(input);
            exit(1);
        }
        if (!input || ft_strncmp(input, "\n", 1) == 0)
        {
            if (check_sorted_bonus(&stack_a, &stack_b, &stack_tmp))
            {
                free(input);
                exit(0);
            }
        }
    }
}