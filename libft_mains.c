/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mains.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:34:16 by sozcan            #+#    #+#             */
/*   Updated: 2021/09/20 16:22:08 by sozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <ctype.h>

int	main()
{
	int	c;

	c = ;
	printf("the value of ft_isascii is %d\n", ft_isascii(c));
	printf("the value of isascii is %d\n", isascii(c));
}

int	main()
{
	int	c;
	char	*s;

	c = 0;
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
