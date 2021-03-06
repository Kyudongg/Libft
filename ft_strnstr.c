/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjonker <kjonker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:53:42 by kjonker           #+#    #+#             */
/*   Updated: 2021/12/14 15:53:43 by kjonker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	unsigned int	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *) &haystack[i]);
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (NULL);
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len > 0 + j)
		{
			if (haystack[j + 1] == '\0' || needle[j + 1] == '\0')
				return ((char *) &haystack[i]);
			j++;
		}
		i++;
		len--;
	}
	return (0);
}
