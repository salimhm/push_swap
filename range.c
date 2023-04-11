/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:45:24 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/11 21:22:54 by shmimi           ###   ########.fr       */
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

void range(t_nb *stack_a, t_nb *stack_b, t_nb *stack_tmp, int range)
{
    // int range = 35;
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
    }
    calculate_distance(stack_a, stack_b);
}

void calculate_distance(t_nb *stack_a, t_nb *stack_b)
{
    int i = 0;
    int shortest_path;
    int greatest;
    while (stack_b->size)
    {
        greatest = find_greatest(stack_b);
        if (stack_b->nb[i] == greatest)
        {
            shortest_path = i;
            if (i < stack_b->size / 2)
            {
                rrb(stack_b);
            }
            else
                rb(stack_b);
            if (stack_b->nb[stack_b->size - 1] == greatest)
            {
                pa(stack_a, stack_b);
            }
            i = 0;
        }
        else
            i++;
    }
}