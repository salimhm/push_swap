/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_bonus2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 04:31:14 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/13 04:31:38 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss_bonus(t_nb *stack_a, t_nb *stack_b)
{
	sa_bonus(stack_a);
	sb_bonus(stack_b);
}

void	rr_bonus(t_nb *stack_a, t_nb *stack_b)
{
	ra_bonus(stack_a);
	rb_bonus(stack_b);
}

void	rrr_bonus(t_nb *stack_a, t_nb *stack_b)
{
	rra_bonus(stack_a);
	rrb_bonus(stack_b);
}
