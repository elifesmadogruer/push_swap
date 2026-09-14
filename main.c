/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 19:09:27 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/11 18:43:29 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	is_strategy(char *argv, t_options *op)
{
	if (ft_strncmp(argv, "--adaptive", 11) == 0)
		op->strategy = 0;
	else if (ft_strncmp(argv, "--simple", 9) == 0)
		op->strategy = 1;
	else if (ft_strncmp(argv, "--medium", 9) == 0)
		op->strategy = 2;
	else if (ft_strncmp(argv, "--complex", 10) == 0)
		op->strategy = 3;
	else if (ft_strncmp(argv, "--bench", 8) == 0)
		op->bench = 1;
	else
		return (0);
	return (1);
}

void	control(int argc, char **argv, t_options *op)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!is_strategy(argv[i], op))
		{
			/* code */
		}
		
		
		i++;
	}
	
}

int	main(int argc, char **argv)
{
	
	t_options	op;

	op.bench = 0;
	op.strategy = 0;
	control(argc, argv, &op);
	return 0;
}
