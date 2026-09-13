/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogruer <edogruer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 14:37:34 by edogruer          #+#    #+#             */
/*   Updated: 2026/09/13 14:55:49 by edogruer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **stack_a)
{
	t_node	*last;

	if (!stack_a || !*stack_a)
		return ;
	last = ft_lstlast(*stack_a);
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = *stack_a;
	(*stack_a)->prev = last;
	*stack_a = last;
}
