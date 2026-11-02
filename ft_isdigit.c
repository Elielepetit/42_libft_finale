/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:27:35 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/26 20:03:02 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	char n;

// 	n = argv[1][0];
// 	printf("%d", ft_isdigit(n));
// }
