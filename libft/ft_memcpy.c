/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:07:40 by daniviei          #+#    #+#             */
/*   Updated: 2025/10/28 14:27:49 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	unsigned const char	*source;
	size_t				i;

	i = 0;
	dst = (unsigned char *)dest;
	source = (unsigned const char *)src;
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "motorhome";
	char	src2[] = "MOTORHOME";
	char	dst[20];
	char	dst2[20];

	ft_memcpy(dst, src, 6);
//	ft_memcpy(src + 2, src, 3); //sobrepor
	memcpy(dst2, src2, 6);
//	memcpy(src2 + 2, src2, 3); //sobrepor
	printf("My dest --> %s\n", dst);
//	printf("My sobrepos src --> %s\n", src);
	printf("Original dest --> %s\n", dst2);
//	printf("Original sobrepos src --> %s\n", src2);
}*/
