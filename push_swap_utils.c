/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:57:10 by daniviei          #+#    #+#             */
/*   Updated: 2026/01/27 14:57:54 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ps_lstadd_front(t_push **lst, t_push *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

t_push	*ps_lstlast(t_push *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_push	*ps_lstnew(int content)
{
	t_push	*node;

	node = malloc(sizeof(t_push));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void	target_index(t_push *stack_a, t_push *stack_b)
{
	int		i;
	t_push	*temp_a;
	t_push	*temp_b;

	temp_a = stack_a;
	while (temp_a)
	{
		i = 0;
		temp_b = stack_b;
		while (stack_b)
		{
			if (temp_a && temp_a->target == temp_b)
			{
				temp_a->target_index = i;
				break ;
			}
			temp_b = temp_b->next;
			i++;
		}
		temp_a = temp_a->next;
	}
}
