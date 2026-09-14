/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ra.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: edogruer <edogruer@student.42istanbul.com.#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/12 19:26:54 by edogruer         #+#    #+#              */
/*   Updated: 2026/09/14 21:57:52 by edogruer        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **stack_a)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	*stack_a = (*stack_a)->next;
}
