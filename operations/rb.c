/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogruer <edogruer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 21:09:21 by edogruer          #+#    #+#             */
/*   Updated: 2026/09/13 14:47:04 by edogruer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_node **stack_b)
{
	t_node	*tmp;
	t_node	*last;

	if (!stack_b || !*stack_b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_b)->prev = NULL;
	last = ft_lstlast(*stack_b);
	last->next = tmp;
	tmp->prev = last;
	tmp->next = NULL;
}
