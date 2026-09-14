/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 19:09:27 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/14 19:35:42 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	

int	control(int argc, char **argv, t_options *op, t_node **head)
{
	int		i;
	int		j;
	int		k;
	char	**tmp;

	i = 1;
	k = 0;
	while (i < argc)
	{
		if (!is_strategy(argv[i], op))
		{
			tmp = ft_split(argv[i], ' ');
			k = 0;
			while (tmp[k])
			{
				printf("%s ", tmp[k]);
				if (ft_atoi_current(tmp[k]))
					return (0);
				k++;
			}
			free(tmp);
		}
		i++;
	}
	return (1);
}

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
