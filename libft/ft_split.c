/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 08:34:17 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/05 19:01:58 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	free_all(char **arr, int j)
{
	while (--j >= 0)
		free(arr[j]);
	free(arr);
}

static int	wordlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static int	w_count(const char *s, char c)
{
	int	i;
	int	w_count;

	i = 0;
	w_count = 0;
	if (s[0] != c && s[0] != '\0')
		w_count++;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			w_count++;
		i++;
	}
	return (w_count);
}

static char	**populate(const char *str, char **arr, char c)
{
	int	i;
	int	j;
	int	end;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
		{
			end = wordlen(&str[i], c);
			arr[j] = (char *)malloc(end + 1);
			if (!arr[j])
				free_all(arr, j);
			ft_strlcpy(arr[j], &str[i], end + 1);
			i = i + end;
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr1;

	if (!s)
		return (NULL);
	arr1 = (char **)malloc(sizeof(char *) * (w_count(s, c) + 1));
	if (!arr1)
		return (NULL);
	return (populate(s, arr1, c));
}
/*
#include <stdio.h>

int	main(void)
{
	int		j;
	char	**array_prime;

	j = 0;
	if (!(array_prime = ft_split("tripouille", ' ')))
		printf("NULL\n");
	else
	{	
		while (array_prime[j])
		{
			printf("sprite :) --> %s\n", array_prime[j]);
			j++;
		}
	}
}*/
