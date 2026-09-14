/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sa.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: edogruer <edogruer@student.42istanbul.com.#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 13:30:20 by edogruer         #+#    #+#              */
/*   Updated: 2026/09/14 21:46:35 by edogruer        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **stack_a)
{
	int	temp;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	temp = (*stack_a)->value;
	(*stack_a)->value = (*stack_a)->next->value;
	(*stack_a)->next->value = temp;
}
