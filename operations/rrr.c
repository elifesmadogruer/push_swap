/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   rrr.c                                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: edogruer <edogruer@student.42istanbul.com.#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/13 14:37:38 by edogruer         #+#    #+#              */
/*   Updated: 2026/09/14 21:59:48 by edogruer        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	rra(stack_a);
	rrb(stack_b);
}
