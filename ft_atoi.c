#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	negative;
	int	i;

	result = 0;
	negative = 1;
	i = 0;
	while (str[i] == (' ') || str[i] == ('\t') || str[i] == ('\r')
		|| str[i] == ('\n') || str[i] == ('\v') || str[i] == ('\f'))
		i++;
	if (str[i] == '-')
	{
		negative = -1;
	}
	if (str[i] == ('-') || str[i] == ('+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = ((result * 10) + (str[i] - '0'));
		i++;
	}
	return (negative * result);
}
