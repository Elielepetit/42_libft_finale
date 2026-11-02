/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elie <elie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:40:13 by elie              #+#    #+#             */
/*   Updated: 2026/10/24 17:56:44 by elie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fonction(unsigned int i, char *c)
{
	*c = *c + i;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char *str;
// 	str = malloc(6 * sizeof(char));
// 	str[0] = 'H';
// 	str[1] = 'e';
// 	str[2] = 'l';
// 	str[3] = 'l';
// 	str[4] = 'o';
// 	str[5] = '\0';

// 	ft_striteri(str, &fonction);
// 	printf("%s\n", str); // Output: "Hfnos"
// 	free(str);
// }