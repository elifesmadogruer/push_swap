/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   pb.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: edogruer <edogruer@student.42istanbul.com.#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/12 16:33:50 by edogruer         #+#    #+#              */
/*   Updated: 2026/09/15 18:18:03 by edogruer        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (!stack_b || !*stack_b || !stack_a || !*stack_a)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	tmp->prev = NULL;
	tmp->next = *stack_b;
	if (*stack_b)
		(*stack_b)->prev = tmp;
	*stack_a = tmp;
}
