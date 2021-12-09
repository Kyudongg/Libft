#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str3;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	str3 = malloc((ft_strlen(s1)) + (ft_strlen(s2)) + 1 * sizeof(char));
	if (!s1 || !s2 || !str3)
		return (NULL);
	while (s1[i] != '\0')
	{
		str3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str3[i + j] = s2[j];
		j++;
	}
	str3[i + j] = '\0';
	return (str3);
}
