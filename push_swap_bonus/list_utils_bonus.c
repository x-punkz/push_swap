/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:37:10 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/06 19:40:26 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap_bonus.h"

void	ps_lstadd_back(t_push **lst, t_push *new)
{
	if (!new || !lst)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ps_lstlast(*lst)->next = new;
}

char	*ps_strjoin(char **s1, char const *s2)
{
	char	*str;
	int		len;
	int		len_s1;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(*s1);
	len = len_s1 + (ft_strlen(s2));
	str = calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, *s1, len_s1);
	ft_memcpy(str + len_s1, s2, ft_strlen(s2));
	free(*s1);
	return (str);
}

int	ps_lstlen(t_push *lst)
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
