/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:04:32 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/04 20:13:28 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		ni;
	size_t	size;
	char	*nstr;

	i = 0;
	ni = 0;
	size = (ft_strlen(s1) + ft_strlen(s2)) * sizeof(char);
	nstr = (char *)malloc(size + 1);
	if (!nstr)
		return (NULL);
	while (s1[i] != '\0')
	{
		nstr[ni++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		nstr[ni++] = s2[i++];
	}
	nstr[ni] = '\0';
	return (nstr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "lorem ipsum";
	char	str2[] = "dolor sit amet";
	char	*new;

	str1[0] = '\0';
	new = ft_strjoin(str1, str2);
	printf("%s\n", new);
	free(new);
}*/
