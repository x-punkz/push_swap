/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:41:08 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/04 13:01:43 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*s;

	i = 0;
	dst = dest;
	s = src;
	if (!dest || !src)
		return (NULL);
	if (dst == s || n == 0)
		return (dest);
	if (dst > s && dst < s + n)
	{
		while (n > 0)
		{
			dst[n - 1] = s[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dst, s, n);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char    src[] = "lorem ipsum dolor sit amet";
        char    *dest;

        dest = src + 1;
	if (dest != ft_memmove(dest, src, 8))
                        write(1, "dest's adress was not returned\n", 31);
                write(1, dest, 22);
-----------------------------------------------------------------------
	char	str[] = "ABCDE";
	char	str2[] = "abcde";
	char	dest[30];
	char	dest2[30];
	
	ft_memmove(str + 2, dest, 0);
	memmove(str2 + 2, dest2, 0);
	printf("my --> %s\n", dest);
	printf("Original --> %s\n", dest2);

	return 0;
}*/
