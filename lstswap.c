/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstswap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:20:30 by daniviei          #+#    #+#             */
/*   Updated: 2026/01/20 18:20:36 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void    lstswap(t_list *stack)
{
    t_list *tmp;
    tmp = ft_lstnew("");
    tmp->content = stack->next->content;
    stack->next->content = stack->content;
    stack->content = tmp->content;
}

void    swap_a(t_list *a)
{
    lstswap(a);
    ft_putstr_fd("sa\n", 1);
}

void    swap_b(t_list *b)
{
    lstswap(b);
    ft_putstr_fd("sb\n", 1);
}
void    swap_ab(t_list *a, t_list *b)
{
    lstswap(a);
    lstswap(b);
    ft_putstr_fd("sa\nsb\n", 1);
}
