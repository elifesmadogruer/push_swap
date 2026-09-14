/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   rb.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: edogruer <edogruer@student.42istanbul.com.#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/12 21:09:21 by edogruer         #+#    #+#              */
/*   Updated: 2026/09/14 21:58:25 by edogruer        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_node **stack_b)
{
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	*stack_b = (*stack_b)->next;
}
