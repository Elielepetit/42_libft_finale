/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:31:32 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 22:11:31 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c += 32;
	return (c);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc,char **argv)
// {
//     (void)argc;
//     printf("%d", ft_toupper(atoi(argv[1])));
// }