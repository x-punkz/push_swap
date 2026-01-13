/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:13:50 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/04 12:22:04 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*new;

	i = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	new = ft_calloc(size + 1, sizeof (char));
	if (!new)
		return (NULL);
	while (i < size)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
/*
#include <stdio.h>
char	bridge_toupper(unsigned int i, char c)
{
	(void)i;
	if (c % 2 != 0)
		return (c);
	return (ft_toupper(c));
}

int	main(void)
{
	char	hello[6] = "hello";
	char	*result = ft_strmapi(hello, &bridge_toupper);
	printf("%s\n", ft_strmapi("abc", &bridge_toupper)); // c + 1
	if (result == NULL)
		printf("NULL");
	else
		printf("%s\n", result); // par -> toupper
	printf("%s\n", ft_strmapi(NULL, &bridge_toupper));
}*/
