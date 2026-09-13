/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogruer <edogruer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 17:33:56 by edogruer          #+#    #+#             */
/*   Updated: 2026/09/13 14:38:29 by edogruer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_node *stack_b)
{
	int	temp;

	if (!stack_b || !stack_b->next)
		return ;
	temp = stack_b->value;
	stack_b->value = stack_b->next->value;
	stack_b->next->value = temp;
}
