/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kjonker <kjonker@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 15:49:24 by kjonker       #+#    #+#                 */
/*   Updated: 2022/02/01 15:40:52 by kjonker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_arr(int n)
{
	long	number;

	number = 0;
	if (n < 0)
		number++;
	if (n == 0)
		number++;
	while (n != 0)
	{
		number++;
		n = n / 10;
	}
	return (number);
}

static char	*make_number(long n, char *str, int count)
{
	while (n > 0)
	{
		str[count - 1] = (n % 10) + '0';
		n = n / 10;
		count--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		count;
	long	number;

	number = (long)n;
	count = count_arr(number);
	if (number == 0)
		return (ft_strdup ("0"));
	res = malloc(sizeof(char) * (count + 1));
	if (res == 0)
		return (NULL);
	res[count] = '\0';
	if (number < 0)
	{	
		res[0] = '-';
		number *= -1;
	}
	res = make_number(number, res, count);
	return (res);
}
