/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjonker <kjonker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:49:24 by kjonker           #+#    #+#             */
/*   Updated: 2021/12/17 19:17:25 by kjonker          ###   ########.fr       */
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

static char	*non_recursive_mode(long n, char *str, int count)
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
	res = non_recursive_mode(number, res, count);
	return (res);
}

///*
int	main(void)
{
	printf("%s\n", ft_itoa(12363744));
	return (0);
}
//*/
	// count how many number inside the number
	//identify if the number is negative or not
	// min int and -0 (edgecases)
	// recursive (module)