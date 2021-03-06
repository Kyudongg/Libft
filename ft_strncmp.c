/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kjonker <kjonker@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 15:53:28 by kjonker       #+#    #+#                 */
/*   Updated: 2022/01/25 15:28:51 by kjonker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1)
	{
		if (*s1 != *s2)
			return (*(unsigned char *) s1 - *(unsigned char *) s2);
		s1++;
		s2++;
		n--;
	}
	if (n > 0 && *s1 != *s2)
		return (*(unsigned char *) s1 - *(unsigned char *) s2);
	return (0);
}
