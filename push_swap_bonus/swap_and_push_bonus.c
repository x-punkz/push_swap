/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_and_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:20:30 by daniviei          #+#    #+#             */
/*   Updated: 2026/01/20 18:20:36 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	lstswap(t_push **stack)
{
	t_push	*tmp;

	tmp = ps_lstnew(0);
	tmp->content = (*stack)->next->content;
	(*stack)->next->content = (*stack)->content;
	(*stack)->content = tmp->content;
	free(tmp);
}

void	swap_a(t_push **a)
{
	if (ps_lstlen(*a) < 2)
		return ;
	lstswap(a);
}

void	swap_b(t_push **b)
{
	if (ps_lstlen(*b) < 2)
		return ;
	lstswap(b);
}

void	push_a(t_push **a, t_push **b)
{
	t_push	*tmp;

	if (ps_lstlen(*b) < 1)
		return ;
	if (b == NULL)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
}

void	push_b(t_push **a, t_push **b)
{
	t_push	*tmp;
	t_push	*last;

	if (a == NULL)
		return ;
	if (ps_lstlen(*a) < 1)
		return ;
	tmp = *a;
	*a = (*a)->next;
	last = *a;
	while (last->next)
		last = last->next;
	if (a)
		(*a)->prev = last;
	tmp->next = *b;
	*b = tmp;
}
