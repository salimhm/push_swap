/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmimi <shmimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:27:03 by shmimi            #+#    #+#             */
/*   Updated: 2023/04/27 17:08:31 by shmimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// void	case1(t_nb *stack_a, t_nb *stack_b, t_op *operations, int i)
// {
// 	operations[i].value = stack_b->nb[i];
// 	operations[i].rb = stack_b->size - 1 - i;
// 	operations[i].ra = operations->next_big_num - stack_a->lol;
// 	operations[i].sc = operations[i].ra + operations[i].rb + 1;
// 	operations[i].indexx = i;
// }

// void	case2(t_nb *stack_a, t_nb *stack_b, t_op *operations, int i)
// {
// 	operations[i].value = stack_b->nb[i];
// 	operations[i].rb = stack_b->size - 1 - i;
// 	operations[i].rra = stack_a->size - operations->next_big_num;
// 	operations[i].sc = operations[i].rra + operations[i].rb + 1;
// 	operations[i].indexx = i;
// }

// void	case3(t_nb *stack_a, t_nb *stack_b, t_op *operations, int i)
// {
// 	operations[i].value = stack_b->nb[i];
// 	operations[i].rrb = i + 1;
// 	operations[i].ra = operations->next_big_num - stack_a->lol;
// 	operations[i].sc = operations[i].ra + operations[i].rrb + 1;
// 	operations[i].indexx = i;
// }

// void	case4(t_nb *stack_a, t_nb *stack_b, t_op *operations, int i)
// {
// 	operations[i].value = stack_b->nb[i];
// 	operations[i].rrb = i + 1;
// 	operations[i].rra = stack_a->size - operations->next_big_num;
// 	operations[i].sc = operations[i].rra + operations[i].rrb + 1;
// 	operations[i].indexx = i;
// }

// void	cases(t_nb *stack_a, t_nb *stack_b, t_op *operations, int i)
// {
// 	int		min;
// 	int		max;

// 	min = find_smallest(stack_a);
// 	max = find_greatest(stack_a);
// 	if ((stack_b->nb[i] < max && stack_b->nb[i] > min) || (stack_b->nb[i] < min
// 			&& stack_b->nb[i] < max))
// 	{
// 		if ((i >= stack_b->size / 2) && (stack_a->size - 1
// 				- operations->next_big_num >= (stack_a->size - stack_a->lol)
// 				/ 2))
// 			case1(stack_a, stack_b, operations, i);
// 		else if ((i >= stack_b->size / 2) && (stack_a->size - 1
// 				- operations->next_big_num <= (stack_a->size - stack_a->lol)
// 				/ 2))
// 			case2(stack_a, stack_b, operations, i);
// 		else if ((i <= stack_b->size / 2) && (stack_a->size - 1
// 				- operations->next_big_num >= (stack_a->size - stack_a->lol)
// 				/ 2))
// 			case3(stack_a, stack_b, operations, i);
// 		else if ((i <= stack_b->size / 2) && (stack_a->size - 1
// 				- operations->next_big_num <= (stack_a->size - stack_a->lol)
// 				/ 2))
// 			case4(stack_a, stack_b, operations, i);
// 	}
// }
