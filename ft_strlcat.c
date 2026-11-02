/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:14:22 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 22:07:53 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_strnlen(const char *s, size_t maxlen) {
	int i;

	i = 0;
	while (i < max && lens[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	len_dst = ft_strnlen(dst, size);
	if (size <= len_dst || size == 0)
		return (size + len_src);
	i = len_dst;
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}
