/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kjonker <kjonker@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 15:52:07 by kjonker       #+#    #+#                 */
/*   Updated: 2022/02/16 16:07:35 by kjonker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Losse strings tellen tussen de delimiter in de meegegeven source string
static int	count_words(char *str, char c)
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
static char	*make_word(char *str, char c)
{
	int		i;
	char	*s;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	s = ft_calloc((i + 1), sizeof(char));
	if (!s)
		return (NULL);
	s = ft_memcpy(s, str, i);
	return (s);
}

// Free
static char	**ft_free(char **r, int k)
{
	while (!r[k])
	{
		k--;
		free(r[k]);
	}
	free(r);
	return (NULL);
}

// Hoofdfunctie
char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		k;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	arr = ft_calloc((count_words((char *) s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i] && k < (count_words((char *)s, c)))
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			arr[k] = make_word((char *)&s[i], c);
		if (!arr[k])
			ft_free(arr, k);
		k++;
		while (s[i] != c && s[i])
			i++;
	}
	return (arr);
}
