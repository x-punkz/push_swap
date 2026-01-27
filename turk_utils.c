/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:35:53 by daniviei          #+#    #+#             */
/*   Updated: 2026/01/27 14:35:54 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	move_b(ps_list *stack_a, ps_list *stack_b)
{
	int	index;

	index = ps_lstlen(stack_a);
	while (index > 3)
	{
		push_b(&stack_a, &stack_b);
		index--;
	}
}

void	update_index(ps_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->index = i;
		stack = stack->next;
		i++;
	}
}

void	target(ps_list *stack_a, ps_list *stack_b)
{
	int	i;
	ps_list		*maybe_target;

	i = 0;
	while (stack_a)
	{
		if (stack_a->content > stack_b->content)
			maybe_target = stack_a;
		if (stack_a->content > stack_b->content
			&& stack_a->content < maybe_target->content)
			stack_b->target = maybe_target;
		stack_a = stack_a->next;
	}
}

void	cost_calculate(ps_list *stack)
{
	int	len;

	len = ps_lstlen(stack);
	while (stack)
	{
		if (stack->index > len / 2)
			stack->cost = stack->index;
		else
			stack->cost = len - stack->index;
		stack = stack->next;
	}
}

void	total_cost_calculate(ps_list *stack)
{
	while (stack)
	{
		stack->total_cost = stack->cost + stack->target->cost;
		stack = stack->next;
	}
}
