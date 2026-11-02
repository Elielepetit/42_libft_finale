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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	len_src = ft_strlen(src);
	if (size == 0 && !dst)
		return (len_src);
	len_dst = ft_strlen(dst);
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

// // #include <stdlib.h>
// // #include <string.h>
// // #include <stdio.h>

// int main(int argc, char **argv)
// {
//     (void)argc;
// 	char *s = NULL;
//     char *s2 = argv[1];

// 	//ft_strlcat(s, s2, atoi(argv[3]));
//     printf("%zu\n", ft_strlcat(s, s2, ft_atoi(argv[2])));
//     printf("%s\n", s);
// 	printf("%s\n", s2);
// }