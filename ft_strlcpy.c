/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:06:43 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 22:08:20 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = 0;
	while (src[len_src])
		len_src++;
	if (size <= 0)
		return (len_src);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     (void)argc;
//     char *s = argv[1];
//     char *s2 = argv[2];

//     printf("%zu\n", ft_strlcpy(s, s2, atoi(argv[3])));
//     printf("%s\n", s);
//     printf("%s\n", s2);
// }