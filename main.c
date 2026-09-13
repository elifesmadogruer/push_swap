/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 19:09:27 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/11 18:09:53 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	is_strategy(char **argv,t_options *op)
{
	if (ft_strncmp(argv, "--adaptive", 10) == 0)
		op->strategy = 0;
	else if (ft_strncmp(argv, "--simple", 8) == 0)
		op->strategy = 1;
	else if (ft_strncmp(argv, "--medium", 7) == 0)
		op->strategy = 2;
	else if (ft_strncmp(argv, "--complex", 9) == 0)
		op->strategy = 3;
}

void	control(char **stored, int argc, char **argv, t_options *op)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		
		
		i++;
	}
	
}

int	main(int argc, char **argv)
{
	char		**stored;
	t_options *op;

	control(stored, argc, argv, op);
	return 0;
}
