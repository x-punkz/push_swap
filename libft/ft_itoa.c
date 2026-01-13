/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:41:16 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/04 12:20:04 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	check_neg(int nb)
{
	if (nb < 0)
		return (1);
	return (0);
}

static	int	c_digit(long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	int		is_neg;
	char	*conv;

	nb = n;
	is_neg = check_neg(nb);
	if (is_neg > 0)
		nb = -nb;
	len = is_neg + c_digit(nb) + 1;
	conv = ft_calloc(len, sizeof(char));
	if (!conv)
		return (NULL);
	if (nb == 0)
		conv[0] = '0';
	len--;
	while (nb > 0)
	{
		conv[--len] = (nb % 10) + 48;
		nb /= 10;
	}
	if (is_neg)
		conv[--len] = '-';
	return (conv);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("Agora é string: --> %s\n", ft_itoa(atoi(argv[1])));
}*/
