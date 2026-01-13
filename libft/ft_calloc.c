/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:37:55 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/05 12:43:39 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	tab = malloc(size * nmemb);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*nbr;
	int	*nbr2;
	int	i;

	i = 0;
	nbr = ft_calloc(-5, 0);
	nbr2 = calloc(-5, 0);
	while (i < 5)
	{
	
		if (nbr == NULL || nbr2 == NULL)
			printf("deu ruim\n");
		else
		{
			printf("meu--> %d  \n", nbr[i]);
			printf("xx --> %d\n", nbr2[i]);
		}
		i++;
	}
	printf("\n");
}*/
