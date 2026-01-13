/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:31:08 by daniviei          #+#    #+#             */
/*   Updated: 2025/10/28 15:41:28 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		chr;

	chr = (unsigned char) c;
	str = (const unsigned char *)s;
	while (n > 0)
	{
		if (*str == chr)
		{
			return ((void *) str);
		}
		str++;
		n--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*p1;
	char	*p2;
	char	str[] = "Paralelepipedo";

	p2 = memchr(str, 'e', 5); 
	p1 = ft_memchr(str, 'e', 5);
	if (p2 != NULL)
		printf("Original --> %ld\n", p2 - str);
	else
		printf("Original --> nao encontrado\n");
	if (p1 != NULL)
		printf("My --> %ld\n", p1 - str);
	else
		printf("my --> nao encontrado\n");
}*/
