/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ra.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: edogruer <edogruer@student.42istanbul.com.#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/12 19:26:54 by edogruer         #+#    #+#              */
/*   Updated: 2026/09/13 01:24:22 by edogruer        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **stack_a)
{
	t_node	*tmp;
	t_node	*last;

	if (!stack_a || !*stack_a)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_a)->prev = NULL;
	last = ft_lstlast(stack_a);
	last->next = tmp;
	tmp->prev = last;
	tmp->next = NULL;
}
