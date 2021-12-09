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

/*int	main(void)
{
	char	s1[15] = "Helloww";
	char	s2[15] = "Hellu";

	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d", strncmp(s1, s2, 0));
}*/
