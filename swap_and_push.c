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

#include "libft/libft.h"
#include "push_swap.h"

void	lstswap(t_push *stack)
{
	t_push	*tmp;

	tmp = ps_lstnew(0);
	tmp->content = stack->next->content;
	stack->next->content = stack->content;
	stack->content = tmp->content;
	free(tmp);
}

void	swap_a(t_push *a)
{
	lstswap(a);
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_push *b)
{
	lstswap(b);
	ft_putstr_fd("sb\n", 1);
}

/*Pega o top de b e joga p topo de a*/
void	push_a(t_push **a, t_push **b)
{
	t_push	*tmp;

	if (b == NULL)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	ft_putstr_fd("pa\n", 1);
}

/*Pega o top de a e joga p topo de b*/
void	push_b(t_push **a, t_push **b)
{
	t_push	*tmp;
	t_push	*last;

	if (a == NULL)
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
	ft_putstr_fd("pb\n", 1);
}
