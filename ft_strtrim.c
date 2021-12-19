/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjonker <kjonker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:54:04 by kjonker           #+#    #+#             */
/*   Updated: 2021/12/17 19:21:19 by kjonker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkstr(char s, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (s == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*output;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (i < j && ft_checkstr(s1[i], set))
		i++;
	while (j > 0 && s1[j - 1] && ft_checkstr(s1[j - 1], set))
		j--;
	output = ft_substr(s1, i, j - i);
	if (!s1 || !set)
		return (NULL);
	return (output);
}
/*
int main(void)
{
	char s1[] = "       ";
	char set[] = " ";

	printf("%s", ft_strtrim(s1, set));
	return (0);
}
*/
