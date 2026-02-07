/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:17:57 by daniviei          #+#    #+#             */
/*   Updated: 2026/02/05 20:13:04 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
/* Checks the argument and adds it to the string. */
static char	*append_str(char **argv)
{
	int		i;
	char	*temp;
	char	*str2;

	i = 1;
	temp = ft_calloc(1, 1);
	while (argv[i] != NULL)
	{
		if (verify(argv[i]))
		{
			ft_putstr_fd("Error\n", 2);
			free(temp);
			return (NULL);
		}
		str2 = argv[i];
		temp = ps_strjoin(&temp, str2);
		temp = ps_strjoin(&temp, " ");
		i++;
	}
	return (temp);
}

/* Converts matrix vector to an int and adds it to a new node*/
void	join(t_push **holder, char *buf)
{
	t_push		*new_node;
	int			value;

	value = ft_atoi(buf);
	new_node = malloc(sizeof (t_push));
	if (!new_node)
		return ;
	new_node->content = value;
	new_node->next = NULL;
	ps_lstadd_back(holder, new_node);
}

int	main(int argc, char **argv)
{
	char	*number_list;
	char	**numbers;
	t_push	*a;
	t_push	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (1);
	number_list = append_str(argv);
	if (number_list == NULL)
		exit(1);
	numbers = ft_split(number_list, ' ');
	free(number_list);
	if (numbers == NULL)
	{
		ft_putstr_fd ("Error\n", 2);
		return (1);
	}
	check_double(numbers);
	append_lst(&a, numbers);
	if (ps_lstlen(a) > 1)
		check_program(&a, &b, numbers);
	free_list(&a);
	free_list(&b);
}
