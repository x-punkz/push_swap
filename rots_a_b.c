/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rots_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:54:01 by daniviei          #+#    #+#             */
/*   Updated: 2026/01/28 16:54:03 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	rot_a(t_push **a, int print)
{
	t_push	*first;
	t_push	*tmp;

	if (!*a || !(*a)->next)
		return ;
	first = *a;
	tmp = *a;
	*a = (*a)->next;
	while (first->next != NULL)
		first = first->next;
	tmp->next = NULL;
	first->next = tmp;
	if (print)
		ft_putstr_fd("ra\n", 1);
}

void	rot_b(t_push **b, int print)
{
	t_push	*first;
	t_push	*tmp;

	if (!*b || !(*b)->next)
		return ;
	first = *b;
	tmp = *b;
	*b = (*b)->next;
	while (first->next != NULL)
		first = first->next;
	tmp->next = NULL;
	first->next = tmp;
	if (print)
		ft_putstr_fd("rb\n", 1);
}

void	rot_ab(t_push **a, t_push **b)
{
	rot_a(a, 0);
	rot_b(b, 0);
	ft_putstr_fd("rr\n", 1);
}

void	double_rotate(t_push **stack_a, t_push **stack_b, t_push *cheap)
{
	while (cheap->cost_a > 0 && cheap->cost_b > 0)
	{
		rot_ab(stack_a, stack_b);
		(cheap->cost_a)--;
		(cheap->cost_b)--;
	}
	while (cheap->cost_a < 0 && cheap->cost_b < 0)
	{
		rotrev_ab(stack_a, stack_b);
		(cheap->cost_a)++;
		(cheap->cost_b)++;
	}
}

void	single_rotate(t_push **stack_a, t_push **stack_b, t_push *cheap)
{
	while (cheap->cost_a > 0)
	{
		rot_a(stack_a, 1);
		cheap->cost_a--;
	}
	while (cheap->cost_a < 0)
	{
		rotrev_a(stack_a, 1);
		cheap->cost_a++;
	}
	while (cheap->cost_b > 0)
	{
		rot_b(stack_b, 1);
		cheap->cost_b--;
	}
	while (cheap->cost_b < 0)
	{
		rotrev_b(stack_b, 1);
		cheap->cost_b++;
	}
}
