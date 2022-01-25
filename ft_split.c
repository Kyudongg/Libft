/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kjonker <kjonker@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 15:52:07 by kjonker       #+#    #+#                 */
/*   Updated: 2022/01/25 15:28:24 by kjonker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Losse strings tellen tussen de delimiter in de meegegeven source string

int	count_words(char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if ((str[i + 1] == c || str[i + 1] == '\0' == 1)
			&& (str[i] == c || str[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}

// Telt de losse characters in de losse string
char	*make_word(char *str, char c)
{
	int		i;
	char	*s;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	s = ft_calloc((i + 1), sizeof(char));
	s = ft_memcpy(s, str, i);
	return (s);
}

// Hoofdfunctie
char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		k;

	i = 0;
	k = 0;
	arr = ft_calloc(count_words((char *)s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			arr[k] = make_word((char *)&s[i], c);
			k++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	arr[k] = NULL;
	return (arr);
}