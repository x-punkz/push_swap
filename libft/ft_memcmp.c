/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:30:36 by daniviei          #+#    #+#             */
/*   Updated: 2025/10/28 15:38:14 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = s1;
	ptr2 = s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	arr1[] = {1, 2, 3, 4, 5};
	char	arr2[] = {1, 2, 4, 4, 5};

	int	resultado = ft_memcmp(arr1, arr2, 5);

	if (resultado < 0)
		printf("arr1 é menor que arr2\n");
	else if (resultado > 0)
		printf("arr1 é maior que arr2\n");
	else
		printf("ambos são iguais\n");
	return 0;
}
*/
