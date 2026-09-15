/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:05:11 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/15 18:56:13 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	add_number(char *str, t_node **head)
{
	int		value;
	int		error;
	t_node	*tmp;

	error = 0;
	value = ft_atoi_current(str, &error);
	if (error)
		return (0);
	if (!*head)
	{
		add_back(head, create_node(value));
		return (1);
	}
	if ((*head)->value == value)
		return (0);
	tmp = (*head)->next;
	while (tmp != *head)
	{
		if (tmp->value == value)
			return (0);
		tmp = tmp->next;
	}
	add_back(head, create_node(value));
	return (1);
}

int	control(int argc, char **argv, t_options *op, t_node **head)
{
	int		i;
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
				if (!add_number(tmp[k],head))
					return (0);
				k++;
			}
			k = 0;
			while (tmp[k])
				free(tmp[k++]);
			free(tmp);
		}
		i++;
	}
	return (1);
}