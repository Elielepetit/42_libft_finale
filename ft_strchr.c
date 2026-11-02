/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:20:01 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 22:05:25 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	size_t			len;
	unsigned char	*str;

	i = 0;
	len = ft_strlen(s);
	str = (unsigned char *)s;
	while (i <= len)
	{
		if (str[i] == (unsigned char) c)
			return (&((char *)str)[i]);
		i++;
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

// 	//ft_strlcat(s, s2, atoi(argv[3]));
//     printf("%s\n", ft_strchr("suprapatata", 't' + 256));
//     printf("%s\n", s);
//     printf("%d\n", s2);
// 	printf("%d", 't' + 256);
// }
