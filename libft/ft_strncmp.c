/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:42:32 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/04 18:01:45 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n -1 && s1[i] == s2[i] && s1[i] != 0)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc < 4)
		return (0);
	printf("mine = %d\n",ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("std = %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("doideira %d\n",ft_strncmp("test\200", "test\0", 6));
	return(0);
}*/
