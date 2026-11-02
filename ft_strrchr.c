/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:43:27 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 22:10:29 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*str;

	i = ft_strlen(s);
	str = (unsigned char *) s;
	while (i >= 0)
	{
		if (str[i] == (unsigned char) c)
			return (&((char *)str)[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     (void)argc;
//     char *s = argv[1];
//     char    c = argv[2][0];
//     int s2 = c;

//     printf("%s\n", ft_strrchr(s, s2));
//     printf("%s\n", s);
//     printf("%d\n", s2);
// }
