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

#include "stdlib.h"

void	*ft_memset(void *s, int c, size_t n)
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

int main(void)
{
	size_t s1[5];
	size_t s2[5];
	int i = 0;

	printf("%x\n%x\n", ft_memset(s1, 'a', sizeof(s1)), memset(s1, 'a', sizeof(s1)));
}
