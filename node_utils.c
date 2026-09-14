/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:15:22 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/11 17:23:53 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

void	add_back(t_node **head, t_node *new)
{
	t_node	*tmp;

	if (!*head)
	{
		new->prev = new;
		new->next = new;
		*head = new;
		return ;
	}
	else
	{
		tmp = (*head)->prev;
		(*head)->prev = new;
		new->prev = tmp;
		tmp->next = new;
		new->next = *head;
		return ;
	}
}
