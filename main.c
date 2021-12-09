#include "libft.h"

int main(void)
{
	char	c;
	char	str;
	char	dst;

	//ft_atoi.c
    
    char number[20] = " +367481890080787234";

	printf("Test:		%d\n", ft_atoi(number));
	printf("Control:	%d\n", atoi(number));
	

    //ft_bzero.c

    char	str[] = "Goodmorning";
	int		i;

	i = 0;

	ft_bzero(str, 5);
	while (str[i] != 'n')
	{
		printf("%c", str[i]);
		i++;
	}
	

    //ft_calloc.c

    printf("%s\n", ft_calloc(10, 4));
	printf("%s", calloc(10, 4));


    //ft_isalnum.c

    printf ("%d\n", ft_isalnum('#'));
    printf ("%d", isalnum('#'));


    //ft_isalpha.c

    printf("%d\n", ft_isalpha(178));
    printf("%d", isalpha(178));
	

    //ft_isascii.c

    printf("%d\n", ft_isascii(178));
    printf("%d", isascii(178));

	
	//ft_isdigit.c

	printf("%d", ft_isdigit('8'));


    //ft_isprint.c

    printf("%d\n", ft_isprint(127));
    printf("%d", isprint(127));


    //ft_memchr.c

    char str[20] = "Hellooo";
	char c = 'o';

	printf("%s\n", ft_memchr(str, c, 5));
	printf("%s", memchr(str, c, 5));


    //ft_memcmp.c

    char	str1[20] = "abc";
	char	str2[20] = "abc";

	printf("%d\n", ft_memcmp(str1, str2, 3));
	printf("%d", memcmp(str1, str2, 3));


    //ft_memcpy.c

    const char	src[] = "Jordan";
	char	dest [10] = "Hi ";

	printf("%s", dest);
	ft_memcpy(dest, src, 6);
	printf("%s", dest);


    //ft_memmove.c

    unsigned const char	src[] = "234";
	unsigned char	dst [] = "123456";

	ft_memmove(dst, src, 6);
	printf("%s", ft_memmove(dst, src, 6);
	

    //ft_memset.c

    char	str[] = "Hello you!";
	ft_memset(str, '@', 6);
	printf("%s\n", str);


    //ft_split.c


    //ft_strchr.c

    const char	s[] = "Hello";
	char		c = 'l';
	
	printf("%s\n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
	

    //ft_strdup.c

    char  str[] = "Hoi";
    printf("%s", ft_strdup(str));
    

    //ft_strjoin.c

    char const str1[] = "good";
	char const str2[] = "morning";
	
	printf("%s", ft_strjoin(str1, str2));
	

    //ft_strlcat.c

    char	dst[10] = "Hello ";
	char	src[10] = "You";

	printf("%zu", ft_strlcat(dst, src, 7));
	printf("\n");
	printf("%lu", strlcat(dst, src, 7));
	

    //ft_strlcpy.c

    const char	src1[20] = "begin";
	char	dst1[20] = "lalalala";
	printf("%lu", ft_strlcpy(dst1, src1, 8));
	printf("\n");
	char	src2[20] = "begin";
	char	dst2[20] = "lalalala";
	printf("%lu", strlcpy(dst2, src2, 8));


    //ft_strlen.c

    const char	ch[] = "helloooo";
	printf("%zu", ft_strlen(ch));
	

    //ft_strncmp.c

    char	s1[15] = "Helloww";
	char	s2[15] = "Hellow";

	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d", strncmp(s1, s2, 4));


    //ft_strnstr.c

    char	haystack[20] = "watermelon or mango?";
    char	needle[5] = "mel";

	printf("%s\n", ft_strnstr(haystack, needle, 6));
	printf("%s", strnstr(haystack, needle, 6));


    //ft_strrchr.c

    const char	s[] = "Watermelon";
	char		c = 'e';	
	printf("%s\n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));


    //ft_strtrim.c

    char str[] = "xoxoxoxoxoxoxoxohepwfqfxkqufqufiuqyfuqykwllxoxoxoxoxoxo";
	char c[] = "xo";
	
	printf("%s\n", ft_strtrim(str, c));
	
    
    //ft_substr.c

    char const str1[] = "substring";
	char	*str2 = ft_substr(str1, 3, 5);

	printf("%s\n%s\n%d\n", str1, str2, 5);
	free(str2);


    //ft_tolower.c

    char	c = 'G';

	printf("%c", ft_tolower(c));
	printf("\n");
	printf("%c", tolower(c));


    //ft_toupper.c

    char	c = 'h';
    printf("%c", ft_toupper(c));
	printf("\n");
	printf("%c", toupper(c));

   return (0);
}