/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:19:49 by daniviei          #+#    #+#             */
/*   Updated: 2026/01/30 11:43:59 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_lstlen(ps_list *lst)
{
	int			i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	sort_three(ps_list **stack_a)
{
	int		max;
	
	update_index(*stack_a, *stack_a);
	index_final(*stack_a);
	max = ps_lstlen(*stack_a) - 1;
	if (!stack_a)
		return ;
	if ((*stack_a)->index_final == max)
		rot_a(stack_a, 1);
	else if ((*stack_a)->next->index_final == max)
		rotrev_a(stack_a, 1);
	if ((*stack_a)->index_final > (*stack_a)->next->index_final)
		swap_a(*stack_a);
}
// 	if (((*stack_a)->content > (*stack_a)->next->content) &&
// 		((*stack_a)->content > (*stack_a)->prev->content))
// 		rot_a(stack_a, 1);
	
// 	if ((*stack_a)->next->content > (*stack_a)->prev->content)
// 		rotrev_a(stack_a, 1);
// 	else if ((*stack_a)->content > (*stack_a)->prev->content)
// 		rot_a(stack_a, 1);
// 	if ((*stack_a)->content > (*stack_a)->next->content)
// 		swap_a(*stack_a);
// }

/*void	sort_four(ps_list *stack_a, ps_list *stack_b)
{
	while(*(int *)stack_a->content != min_node(stack_a))
		rot_a(stack_a, 1);
	push_b(&stack_a, &stack_b);
	sort_three(stack_a);
	push_a(stack_a, stack_b);
}*/

/*void	sort_five(ps_list *stack_a, ps_list *stack_b)
{
	
}*/

int	max_index(ps_list *stack)
{
	int	max;

	max = stack->index;
	while (stack)
	{
		if (stack->index > max)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

ps_list		*min_node(ps_list *stack)
{
	ps_list	*aux;
	ps_list	*min;


	aux = stack;
	min = stack;
	while(aux)
	{
		if (min->content > aux->content)
			min = aux;
		aux = aux->next;
	}
	return (min);
}

void	sort_stack(ps_list **stack_a, ps_list **stack_b)
{
	int		size;

	size = ps_lstlen(*stack_a);
	if (size == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			swap_a(*stack_a);
	}
	else if (size == 3)
			sort_three(stack_a);
	/*	if (ps_lstlen(stack_a) == 4)
			sort_four(stack_a, stack_b);*/
	else
		turk(stack_a, stack_b);
}
