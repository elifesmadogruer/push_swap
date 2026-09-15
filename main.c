/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 19:09:27 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/15 15:06:25 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_options	op;
	t_node		*head;

	head = NULL;
	op.bench = 0;
	op.strategy = 0;
	control(argc, argv, &op, &head);
	return (0);
}
