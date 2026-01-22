/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:56:05 by daniviei          #+#    #+#             */
/*   Updated: 2025/12/23 18:05:56 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
/*typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
*/
void	sort_stack(t_list *a, t_list *b);
void    swap_a(t_list *a);
void    swap_b(t_list *b);
void    swap_ss(t_list *a, t_list *b);
void    rot_a(t_list *a);
void    rotrev_a(t_list *a);
void	lstswap(t_list *stack);
#endif
