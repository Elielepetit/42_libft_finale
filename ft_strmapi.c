/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elie <elie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:14:11 by elie              #+#    #+#             */
/*   Updated: 2026/10/24 17:52:36 by elie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	test_je_peut_mettre_ce_que_je_veut(unsigned int i, char c)
{
	return (c + i);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*new_str;

	str = NULL;
	new_str = ft_strmapi(str, &test_je_peut_mettre_ce_que_je_veut);
	if (new_str)
	{
		printf("%s\n", new_str);
		free(new_str);
	}
}
*/