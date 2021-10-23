/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mains.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:19:42 by seozcan           #+#    #+#             */
/*   Updated: 2021/10/20 16:22:16 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//PART I

#include <ctype.h>
#include <libc.h>

int	main(void)
{
	int	c;

	c = ;
	printf("the value of ft_isascii is %d\n", ft_isascii(c));
	printf("the value of isascii is %d\n", isascii(c));
}

int	main(void)
{
	int		c;
	const char	*s;

	c = 'a';
	s = "ceci est une chaine de test";
	printf("the value of ft_strchr is %s\n", ft_strchr(s, c));
	printf("the value of strchr is %s\n", strchr(s, c));
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("the value of ft_strnstr is '%s'\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	printf("the value of strnstr is '%s'\n", strnstr(av[1], av[2], atoi(av[3])));
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("the value of ft_strchr is '%s'\n", ft_strchr(av[1], atoi(av[2])));
	printf("the value of strchr is '%s'\n", strchr(av[1], atoi(av[2])));
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("the value of ft_strncmp is %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	printf("the value of strncmp is %d\n", strncmp(av[1], av[2], atoi(av[3])));
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("the value of ft_strlcat is %lu\n", ft_strlcat(av[1], av[2], strlen(av[1])));
	printf("the value of strlcat is %lu\n", strlcat(av[3], av[4], strlen(av[3])));
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("the value of ft_strlcpy is %lu\n", ft_strlcpy(av[1], av[2], strlen(av[1])));
	printf("the value of strlcpy is %lu\n", strlcpy(av[3], av[4], strlen(av[3])));
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_atoi returns %d\n", ft_atoi(av[1]));
	printf("atoi returns %d\n", atoi(av[1]));
}

int	main(void)
{
	void	*s;
	size_t	n;

	s = "this is a test, this function is fucking garbage";
	n = strlen(s);
	ft_bzero(&s, n);
	bzero(&s, n);
}

int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	ft_memset(str + 13, '.', 8*sizeof(char));

	printf("After memset():  %s", str);
	return 0;
}

int main ()
{
	char str1[] = "Geeks";
	char str2[] = "Quizz";

	puts("str1 before memcpy ");
	puts(str1);

	/* Copies contents of str2 to str1 */
	ft_memcpy (str1, str2, sizeof(str2));

	puts("\nstr1 after memcpy ");
	puts(str1);

	return 0;
}

int main()
{
	char str1[100] = "Geeks"; // Array of size 100
	char str2[5] = "Quizz"; // Array of size 5

	puts("str1 before memmove ");
	puts(str1);

	/* Copies contents of str2 to sr1 */
	ft_memmove(str1, str2, sizeof(str2));

	puts("\nstr1 after memmove ");
	puts(str1);

	return 0;
}

int main()
{
	char 	*arr;
	char	*pc;

	arr = "badefAg";
	pc = (char*)ft_memchr(arr, 'g', sizeof(arr));
	if (pc != NULL)
		printf("search character found\n");
	else
		printf("search character not found\n");
	return (0);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("the value of ft_memcmp is %d\n", ft_memcmp(av[1], av[2], 6));
	printf("the value of memcmp is %d\n", memcmp(av[3], av[4], 6));
}

int	main()
{
	size_t	count;
	size_t	countt;
	size_t	size;
	size_t	sizee;

	count = 9;
	countt = 9;
	size = 10;
	sizee = 10;
	printf("ft_calloc returns\n %s\n", (char *)ft_calloc(count, size));
	printf("calloc returns\n %s\n", (char *)calloc(countt, sizee));
	return (0);
}

int	main(void)
{
	const char	*s1;

	s1 = "this is a test string";
	printf("ft_strdup returns\n>%s\n\n", ft_strdup(s1));
	printf("strdup returns\n>%s\n", strdup(s1));
	return (0);
}

//PART II

int	main()
{
	const char	*s;
	unsigned int	start;
	size_t		len;

	s = "this is a test string ffs.";
	start = 20;
	len = strlen(s) - start;
	printf("ft_substr returns\n>%s\n", ft_substr(s, start, len));
	return (0);
}

int	main()
{
	char const	*s1;
	char const	*s2;

	s1 = "this is a";
	s2 = " test string ffs.";
	printf("ft_strjoin returns\n>%s\n", ft_strjoin(s1, s2));
	return (0);
}
