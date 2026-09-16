/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   pa.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: edogruer <edogruer@student.42istanbul.com.#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 17:47:49 by edogruer         #+#    #+#              */
/*   Updated: 2026/09/16 14:32:04 by edogruer        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **stack_a, int print, t_node **stack_b)
{
	t_node	*tmp;

	if (!stack_a || !stack_b || !*stack_b)
		return ;
	tmp = pop_node(stack_b);
	push_node(stack_a, tmp);
	if (print)
		write(1, "pa\n", 3);
}
