#include "libft.h"

int	ft_checkstr(char s, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (s == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (ft_checkstr(s1[i], set))
		i++;
	while (ft_checkstr(s1[j - 1], set))
		j--;
	if (i > j && s1[i])
		return (ft_strdup(""));
	return (ft_substr(s1, i, j - i));
}
/*
int main(void)
{
	char s1[] = "abcdba";
	char set[] = "acb";

	printf("|%s|\n", ft_strtrim(s1, set));
	return (0);
}
*/
