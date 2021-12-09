#include "libft.h"

// Losse strings tellen tussen de delimiter in de meegegeven source string
int	count_words(char *str, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c && str[i])
			i++;
		if (str[i])
			k++;
	}
	return (k);
}

// Telt de losse characters in de losse string
char	*make_word(char *str, char c)
{
	int		i;
	char	*s;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	s = ft_calloc((i), sizeof(char));
	s = ft_memcpy(s, str, i);
	return (s);
}

// Ruimte vrijmaken als iets fout gaat
// char	check_free()
// {

// }

// Hoofdfunctie
char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		k;

	i = 0;
	k = 0;
	arr = malloc((sizeof(char *)) * (count_words((char *)s, c) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			arr[k] = make_word((char *)&s[i], c);
			k++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	arr[k] = NULL;
	return (arr);
}

/*
int	main(void)
{
	char	str[] = "      split       this for   me  !";
	char	ch = ' ';
	char	**out;
	int 	i = 0;

	out = ft_split(str, ch);

	while (out[i])
	{
		printf("%s\n", out[i]);
		i++;
	}
	return(0);
}
*/
