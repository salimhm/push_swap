/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:45:24 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/11 21:00:16 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    get_pos(t_nb *stack_tmp, int nb)
{
    int i = 0;

    while(i < stack_tmp->size)
    {
        if (nb == stack_tmp->nb[i])
            return i;
        i++;
    }
    return 0;
}

void range(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp)
{
    int range = 15;
    // int i = stack_a->lol;
    // int j = 0;
    int nb;
    int pos_tmp;

    while (stack_a->lol < stack_a->size)
    {
        nb = stack_a->nb[stack_a->lol];
        pos_tmp = get_pos(stack_tmp, nb);
        if (pos_tmp <= stack_a->lol)
        {
            pb(stack_a, stack_b);
            rb(stack_b);
        }
        else if (pos_tmp <= stack_a->lol + range)
        {
            pb(stack_a, stack_b);
        }
        else
        {
            ra(stack_a);
        }
        // i++;
    }
    // int i;
    // i = 0;
    // printf("------------------Stack B After------------------\n");
    // while (i < stack_b->size)
    // {
    //     printf("%d\n", stack_b->nb[i]);
    //     i++;
    // }
}