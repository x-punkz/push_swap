/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:43:02 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/05 16:46:20 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str;
	char	*to_find;
	size_t	t_len;

	if (*little == 0)
		return ((char *) big);
	while (*big != '\0' && len > 0)
	{
		t_len = len;
		str = (char *) big;
		to_find = (char *)little;
		while (*str == *to_find && *to_find != '\0' && t_len > 0)
		{
			str++;
			to_find++;
			t_len--;
		}
		if (*to_find == '\0')
			return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(int argc, char **argv)
{
	char	*str;

	str = "aaabcabcd";
//	t_find = "bam";

	(void)argc;
	printf("My --> %s\n", ft_strnstr(str, argv[1], atoi(argv[2])));
	printf("Original --> %s\n", strnstr(str, argv[1], atoi(argv[2])));
}*/
