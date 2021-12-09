#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		return (ft_strdup(s + start));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (len > 0 && s[i])
	{
		str[i] = s[start + i];
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(void)
{
	char const str1[] = "tripouille";
	char	*str2 = ft_substr(str1, 42, 100);

	printf("%s\n%s\n", str1, str2);
	free(str2);
}
*/