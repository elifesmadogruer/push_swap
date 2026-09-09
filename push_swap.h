/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:46:26 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/09 20:18:03 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct node
{
	void			*content;
	struct node	*next;
	struct node	*prev;
}					node;

typedef struct options
{
	int	strategy;
	int	bench;
}					options;

char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t nmemb, size_t size);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

#endif