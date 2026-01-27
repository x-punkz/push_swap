/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:35:54 by daniviei          #+#    #+#             */
/*   Updated: 2026/01/27 15:36:27 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

    // dado o top de b, encontrar em a um valor menor q
    /* A: 5 2 9 4 8 7 3
    PAsso 1:
		mover todos os valores p b, menores os 3 ultimos 
			A: 8 7 3
             B: 4 9 2 5
		e dar update no index
    Passo 2:
		oredar b com sort 3
            3 7 8
			dar update no index
    [x] Passo 3:
            achar os numeros maires q topo b, e o menor numero entre eles
            se o topo de b for o maior numero da lista, o alvo é b;

    [x]passo 4: 
    calcular o custo
        ver quantas operaçoes sao necessarias p mover o numero
        calculamos a posiçao dele e o tmanho da lista
    */
ps_list		*cheap_cost(ps_list *stack_b)
{
	ps_list		*min_cheap;
	ps_list		*aux;

	aux = stack_b;
	min_cheap = aux;
	while(aux)
	{
		if (min_cheap->total_cost > aux->total_cost)
			min_cheap = aux;
		aux = aux->next;
	}
	return (min_cheap);
}

void	choose_movs(ps_list *stack_a, ps_list *stack_b)
{
	//rever a logica
	ps_list		*aux_b;

	aux_b = stack_b;
	while (aux_b)
	{
		if (aux_b->total_cost < ps_lstlen(stack_b)/ 2)
			rot_b(stack_b);
		else
			rotrev_b(stack_b);
		if (aux_b == cheap_cost(stack_b))
			push_a(stack_a, stack_b);
	}
}

void	turk(ps_list *stack_a, ps_list *stack_b)
{
	ps_list		*more_cheap;

	move_b(stack_a, stack_b);
	update_index(stack_a);
	update_index(stack_b);
	sort_three(stack_a);
	while (stack_b)
	{
		target(stack_a, stack_b);
		cost_calculate(stack_b);
		cost_calculate(stack_a);
		total_cost_calculate(stack_b);
		more_cheap = cheap_cost(stack_b);
	}
	//fazer uma funçao p escolher os movimentos
	// se o cheap estiver da metdae p cima de b, rot_b
	// senao, rot_b
	
}
