#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*data;

	data = malloc((count) * (size));
	if (data == NULL)
		return (0);
	ft_bzero(data, (count) * (size));
	return (data);
}
