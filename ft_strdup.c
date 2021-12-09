#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src);

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = malloc (ft_strlen(s1) + 1);
	if (str != NULL)
		ft_strcpy(str, s1);
	return (str);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
