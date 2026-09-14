/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ss.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: edogruer <edogruer@student.42istanbul.com.#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 17:45:09 by edogruer         #+#    #+#              */
/*   Updated: 2026/09/14 21:44:23 by edogruer        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_node **stack_a, t_node **stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	sa(stack_a);
	sb(stack_b);
}
