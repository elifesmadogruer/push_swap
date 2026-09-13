/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogruer <edogruer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 17:47:38 by edogruer          #+#    #+#             */
/*   Updated: 2026/09/13 14:58:44 by edogruer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_node **stack_b)
{
	t_node	*last;

	if (!stack_b || !*stack_b)
		return ;
	last = ft_lstlast(*stack_b);
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = *stack_b;
	(*stack_b)->prev = last;
	*stack_b = last;
}
