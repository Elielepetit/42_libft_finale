/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:57:46 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 21:53:53 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	len;
	char	*res;

	res = NULL;
	if (!size)
	{
		res = malloc(0);
		return (res);
	}
	len = nmemb * size;
	if (len / size != nmemb)
		return (res);
	res = malloc(len);
	if (!res)
		return (NULL);
	ft_bzero(res, len);
	return (res);
}

// int main(int ac, char **av)
// {
//     char    *s;
//     int     i;
// 	int		j;

//     if (ac != 3)
//         return (1);
//     i  = atoi(av[1]);
//     j  = atoi(av[2]);
//     s = ft_calloc(i, j);
//     printf("%s\n", s);
//     free(s);
// }