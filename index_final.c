#include "push_swap.h"

void	index_final (ps_list *stack)
{
	ps_list	*tmp;
	ps_list	*tmp2;
	int	i;

	tmp = stack;
	while (tmp)
	{
		tmp2 = stack;
		i = 0;
		while (tmp2)
		{
			if (tmp2->content < tmp->content)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->index_final = i;
		tmp = tmp->next;
	}
}