/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 22:06:26 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 22:06:50 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcats(char *dest, const char *src1, const char *src2)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (src1[j])
	{
		dest[i] = src1[j];
		j++;
		i++;
	}
	j = 0;
	while (src2[j])
	{
		dest[i] = src2[j];
		j++;
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res_str;
	int		nb_malloc;

	if (!s1 || !s2)
		return (NULL);
	nb_malloc = 0;
	nb_malloc = ft_strlen(s1) + ft_strlen(s2);
	res_str = malloc(sizeof(char) * nb_malloc + 1);
	if (!res_str)
		return (res_str);
	ft_strcats(res_str, s1, s2);
	return (res_str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char *str = "abcd";
// 	const char *sep = "dda dsa";
// 	char *res = ft_strjoin(str, sep);
// 	printf("%s", res);
// 	free(res);
// }