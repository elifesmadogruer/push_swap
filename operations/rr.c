/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogruer <edogruer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 14:26:37 by edogruer          #+#    #+#             */
/*   Updated: 2026/09/13 15:02:20 by edogruer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
	ra(stack_a);
	rb(stack_b);
}
