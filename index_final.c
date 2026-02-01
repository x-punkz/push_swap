/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_final.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:17:57 by daniviei          #+#    #+#             */
/*   Updated: 2026/01/20 12:27:45 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_final(ps_list *stack)
{
	ps_list	*tmp;
	ps_list	*tmp2;
	int		i;

	tmp = stack;
	while (tmp)
	{
		tmp2 = stack;
		i = 0;
		while (tmp2)
		{
			if (tmp2->content < tmp->content)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->index_final = i;
		tmp = tmp->next;
	}
}

int	mod(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
