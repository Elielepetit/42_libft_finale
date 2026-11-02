/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:37:21 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 21:54:23 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if ((c <= 'z' && c >= 'a')
		|| (c <= 'Z' && c >= 'A')
		|| (c <= '9' && c >= '0'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	char	l;

// 	l = argv[1][0];
// 	printf("%d", ft_isalnum(l));
// }
