/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elquetau <elquetau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:51:07 by elquetau          #+#    #+#             */
/*   Updated: 2026/10/30 18:39:09 by elquetau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int		count;
	bool	in_word;
	int		i;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == false)
		{
			in_word = true;
			count++;
		}
		else if (s[i] == c)
			in_word = false;
		i++;
	}
	return (count);
}

void	free_all(char **res, int i)
{
	while (i > 0)
	{
		i--;
		free(res[i]);
	}
	free(res);
}

int	ft_result(char **result, char const *s, char c, int words)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] && s[j] != c)
			j++;
		result[i] = ft_calloc((j + 1), sizeof(char));
		if (!result[i])
		{
			free_all(result, i);
			return (0);
		}
		ft_strlcpy(result[i], s, j + 1);
		s += j;
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	result = ft_calloc((words + 1), sizeof(char *));
	if (!result)
		return (NULL);
	result[words] = NULL;
	if (ft_result(result, s, c, words) == 1)
		return (result);
	else
		return (NULL);
}

// int	main(void)
// {
// 	char **result;
// 	size_t i;

// 	result = ft_split("a,a,a,a", ',');
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }