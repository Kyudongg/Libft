#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	str = s;
	i = 0;
	while (i < n)
	{
		*str = '\0';
		str++;
		i++;
	}
}