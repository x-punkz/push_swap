/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:28:05 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/04 10:55:08 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	even_star(unsigned int i, char *str)
{
	if (i % 2 == 0)
		str[i] = '*';
}

int	main(void)
{
	char	str[] = "hashtag boladao";

	printf("Original: %s\n", str);
	ft_striteri(str, &even_star);
	printf("Modify: %s\n", str);
}*/
