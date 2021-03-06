/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjonker <kjonker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:52:44 by kjonker           #+#    #+#             */
/*   Updated: 2021/12/14 15:52:45 by kjonker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendst;

	i = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (lendst >= dstsize)
		return (lensrc + dstsize);
	while (src[i] && (dstsize - lendst - 1) > 0)
	{
		dst[i + lendst] = src[i];
		i++;
		dstsize--;
	}
	dst[i + lendst] = '\0';
	return (lendst + lensrc);
}
