/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:12:37 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/26 22:21:30 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(int *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(void)
// {
//     int s[5];
//     int i = 0;

//     ft_memset(s, 'a', sizeof(s));
//     while (i < 5)
//     {
//         printf("%d\n", s[i]);
// 		i++;
// 	}
// }