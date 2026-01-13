/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:50:58 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/05 12:45:26 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char			*flag;
	char			*str;
	unsigned char	ch;

	ch = (unsigned char)c;
	flag = 0;
	str = (char *)s;
	while (*str != '\0')
	{
		if (str[0] == ch)
			flag = &str[0];
		str++;
	}
	if (ch == '\0')
		return (flag = &str[0]);
	return (flag);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "paralelepipedo";
	char	c;

	c = 'e';
	printf("my --> %s\n", ft_strrchr(str, c + 256));
	printf("Orig --> %s\n", strrchr(str, c + 256));
}
*/
