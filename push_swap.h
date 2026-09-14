/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:46:26 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/14 15:56:54 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define INT_MAX_PS 2147483647
# define INT_MIN_PS -2147483648

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_options
{
	int	strategy;
	int	bench;
}					t_options;

t_node	*create_node(int value);
int		is_strategy(char *argv, t_options *op);
void	add_back(t_node **head, t_node *new);
int		ft_atoi_current(const char *nptr, int *error);

#endif