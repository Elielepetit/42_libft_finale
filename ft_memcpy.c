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

// int main(void)
// {
//     /*int dest[] = {1, 2, 3, 4};
//     int src[] = {0, 0, 0, 0};
//     int destm[] = {1, 2, 3, 4, 5 ,6 ,7};
//     int srcm[] = {0, 0, 0, 0, 0, 0 ,0, 0};
//     ft_memcpy(dest, src, 4);
//     memcpy(destm, srcm, 4);
//     printf("%d", srcm);
//     printf("%c", '\n');
//     printf("%d", destm);
//     printf("%c", '\n');*/

//     int src[] = {1,2,3,4,5,6,7,8,9};
//     int dest[] = {0,0,0,0,0,0,0};

//     ft_memcpy(dest, src, sizeof(dest));

//     size_t i = 0;
//     while (i < 7)
//     {
//         printf("%d", dest[i++]);
//     }
// }