/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:41:35 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/04 11:59:12 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	res;

	res = 0;
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write (fd, "-", 1);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	res = (n % 10) + 48;
	write (fd, &res, 1);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_fd(atoi(argv[1]), atoi(argv[2]));
	write (atoi(argv[2]), "\n", 1);
}*/
