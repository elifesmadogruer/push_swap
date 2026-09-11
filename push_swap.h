/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   push_swap.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: edogruer <edogruer@student.42istanbul.com.#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 13:41:01 by edogruer         #+#    #+#              */
/*   Updated: 2026/09/09 15:58:05 by edogruer        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_node
{
	struct s_node	*next;
	int				data;
	struct s_node	*prev;
}	t_node;
