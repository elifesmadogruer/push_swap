/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sa.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: edogruer <edogruer@student.42istanbul.com.#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 13:30:20 by edogruer         #+#    #+#              */
/*   Updated: 2026/09/09 17:38:40 by edogruer        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node *stack_a)
{
	int	temp;

	if (!stack_a || !stack_a->next)
		return ;
	temp = stack_a->data;
	stack_a->data = stack_a->next->data;
	stack_a->next->data = temp;
}
