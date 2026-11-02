/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:28:55 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 22:10:13 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*return_value;

	j = 0;
	i = 0;
	k = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
		{
			return_value = (char *)&big[i];
			while ((big[i] == little[j] && i < len && big[i]) || little[j] == '\0')
			{
				if (little[j] == '\0')
					return (return_value);
				i++;
				j++;
			}
			j = 0;
			i = k;
		}
		k++;
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     (void)argc;
//     const char *big = (const char *)argv[1];
//     const char *little = (const char *)argv[2];
//     size_t l = atoi(argv[3]);

//     printf("%s", ft_strnstr(big, little, l));
// }