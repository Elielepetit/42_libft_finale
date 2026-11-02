/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:35:49 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 22:00:12 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	int src[] = {1, 2, 3, 4, 0};
	int dest[] = {0, 0, 0, 0, 0};
	int srcm[] = {1, 2, 3, 4, 5 ,6 ,7, 0};
	int destm[] = {0, 0, 0, 0, 0, 0 ,0, 0};

	printf("%x\n%x\n", ft_memcpy(dest, src, 16), 0);

	for(int i = 0; src[i]; i++){
		printf("%d", src[i]);
	}
	printf("\n");
	for(int i = 0; dest[i]; i++){
		printf("%d", dest[i]);
	}
	printf("\n");


	ft_memcpy(dest, src, sizeof(dest));

	size_t i = 0;
	while (i < 7)
	{
		printf("%d", dest[i++]);
	}
}
