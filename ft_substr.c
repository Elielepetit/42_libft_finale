/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:56:30 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/26 22:09:39 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = (size_t) start;
	j = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		res = ft_calloc(1, sizeof(char));
		return (res);
	}
	if (len > s_len - start)
		len = s_len - start;
	res = ft_calloc(sizeof(char), len + 1);
	if (!res)
		return (NULL);
	while (s[i] && j != len)
		res[j++] = s[i++];
	return (res);
}

// int main(void)
// {
// 	char    *res;

// 	res = ft_substr("abc", 1, 3);
// 	printf("%s", res);
// 	free(res);
// }