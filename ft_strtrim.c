/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 14:58:18 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 22:10:58 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	index_start(char const *s1, char const *set)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

static size_t	index_end(char const *s1, char const *set)
{
	int	j;
	int	k;

	j = 0;
	k = ft_strlen(s1) - 1;
	while (set[j])
	{
		if (s1[k] == set[j])
		{
			k--;
			j = -1;
		}
		j++;
	}
	return (k);
}

static char	*resulter(char *s1, char *set, char *res)
{
	size_t	i;
	size_t	j;
	int		k;

	k = 0;
	i = index_start((char *)s1, (char *)set);
	j = index_end((char *)s1, (char *)set);
	while (i <= j)
		res[k++] = s1[i++];
	res[k] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;

	if ((s1 == NULL) || (set == NULL))
		return (NULL);
	i = index_start(s1, set);
	j = index_end(s1, set);
	if (i > j)
	{
		res = ft_calloc(sizeof(char), 1);
		return (res);
	}
	res = ft_calloc(sizeof (char), ((j - i) + 1) + 1);
	if (!res)
		return (NULL);
	res = resulter((char *)s1, (char *)set, res);
	return (res);
}

/*
#include <stdio.h>

int	main(int ac, char *av[])
{
	char	*s1;
	char	*s2;
	char	*res;

	ac = ac * 1;
	s1 = av[1];
	s2 = av[2];
	res = ft_strtrim(s1, s2);
	printf("%s\n", res);
	free (res);
}*/