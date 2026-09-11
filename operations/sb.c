/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sb.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: edogruer <edogruer@student.42istanbul.com.#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 17:33:56 by edogruer         #+#    #+#              */
/*   Updated: 2026/09/09 17:45:05 by edogruer        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_node *stack_b)
{
	int	temp;

	if (!stack_b || !stack_b->next)
		return ;
	temp = stack_b->data;
	stack_b->data = stack_b->next->data;
	stack_b->next->data = temp;
}
