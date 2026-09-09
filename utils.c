/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:15:22 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/09 20:17:30 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*storage;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > (__SIZE_MAX__ / size))
		return (NULL);
	storage = malloc(nmemb * size);
	if (storage == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)storage)[i] = 0;
		i++;
	}
	return (storage);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	str1;
	unsigned char	str2;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (n == i)
		return (0);
	str1 = s1[i];
	str2 = s2[i];
	return (str1 - str2);
}
