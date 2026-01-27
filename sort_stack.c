/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:19:49 by daniviei          #+#    #+#             */
/*   Updated: 2026/01/20 18:19:51 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_lstlen(ps_list *lst)
{
	int	count;
	ps_list	*aux;

	count = 1;
	aux = lst;
	while (aux->next)
	{
		if (aux->next == lst)
			break ;
		aux = aux->next;
		count++;
	}
	return (count);
}

void	sort_three(ps_list *stack_a)
{
	ps_list	*a;

	a = stack_a;
	if (!stack_a)
		return ;
	if ((*(int *)a->content > *(int *)a->next->content) &&
		(*(int *)a->content > *(int *)a->prev->content))
		rot_a(a);
	if (*(int *)a->next->content > *(int *)a->prev->content)
		rotrev_a(a);
	else if (*(int *)a->content > *(int *)a->prev->content)
		rot_a(a);
	if (*(int *)a->content > *(int *)a->next->content)
		swap_a(a);
	update_index(stack_a);
}

void	sort_four(ps_list *stack_a, ps_list *stack_b)
{
	while(*(int *)stack_a->content != min_node(stack_a))
		rot_a(stack_a);
	push_b(&stack_a, &stack_b);
	sort_three(stack_a);
	push_a(stack_a, stack_b);
}

/*void	sort_five(ps_list *stack_a, ps_list *stack_b)
{
	
}*/

int		min_node(ps_list *stack)
{
	int		min;
	ps_list	*aux;

	aux = stack;
	min = *(int *)aux->content;
	while(aux->next)
	{
		if (min > *(int *)aux->content)
			min = *(int *)aux->content;
		aux = aux->next;
	}
	return (min);
}

void	sort_stack(ps_list *stack_a, ps_list *stack_b)
{
	if (ps_lstlen(stack_a) <= 3)
	{	
		if (ps_lstlen(stack_a) == 2)
		{
			if (*(int *)stack_a->content > *(int *)stack_a->next->content)
				swap_a(stack_a);
		}
		if (ps_lstlen(stack_a) == 3)
			sort_three(stack_a);
	/*	if (ps_lstlen(stack_a) == 4)
			sort_four(stack_a, stack_b);*/
	}
	else
		turk(stack_a, stack_b);

}
