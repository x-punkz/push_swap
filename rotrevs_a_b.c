/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotrevs_a_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:57:20 by daniviei          #+#    #+#             */
/*   Updated: 2026/01/28 16:57:26 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include "libft/libft.h"

/* Move last node for the top of list */
void	rotrev_a(t_push **a, int print)
{
	t_push		*temp;
	t_push		*last;
	t_push		*second_last;

	if (a == NULL || *a == NULL)
		return ;
	temp = *a;
	while (temp->next != NULL)
	{
		second_last = temp;
		temp = temp->next;
	}
	last = temp;
	second_last->next = NULL;
	last->next = *a;
	*a = last;
	if (print)
		ft_putstr_fd("rra\n", 1);
}

void	rotrev_b(t_push **b, int print)
{
	t_push		*temp;
	t_push		*last;
	t_push		*second_last;

	if (b == NULL || *b == NULL)
		return ;
	temp = *b;
	while (temp->next != NULL)
	{
		second_last = temp;
		temp = temp->next;
	}
	last = temp;
	second_last->next = NULL;
	last->next = *b;
	*b = last;
	if (print)
		ft_putstr_fd("rrb\n", 1);
}

/* Move both last nodes for the top of lists */
void	rotrev_ab(t_push **a, t_push **b)
{
	rotrev_a (a, 0);
	rotrev_b (b, 0);
	ft_putstr_fd("rrr\n", 1);
}
