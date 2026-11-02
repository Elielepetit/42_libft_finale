/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:59:40 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 22:48:12 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	signe;
	int	i;
	int	result;

	i = 0;
	result = 0;
	signe = 1;
	while (nptr[i] && (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r')))
		i++;
	if (nptr[i] == '-')
	{
		signe *= -1;
		i++;
	}
	if (nptr[i] == '+')
		i++;
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		result = result * 10;
		result = result + (nptr[i] - 48);
		i++;
	}
	return (result * signe);
}

// int main(int argc, char **argv)
// {
//    (void)argc;
//     printf("%d", ft_atoi(argv[1]));
// }