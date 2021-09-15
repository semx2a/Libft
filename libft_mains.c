/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mains.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:34:16 by sozcan            #+#    #+#             */
/*   Updated: 2021/09/15 20:12:54 by sozcan           ###   ########.fr       */
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

#include <libc.h>

int	main(int ac, char **av)
{
	(void)ac;

	printf("the value of ft_strnstr is '%s'\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	printf("the value of strnstr is '%s'\n", strnstr(av[1], av[2], atoi(av[3])));
}

#include <libc.h>

int	main(int ac, char **av)
{
	(void)ac;

	printf("the value of ft_strchr is '%s'\n", ft_strchr(av[1], atoi(av[2])));
	printf("the value of strchr is '%s'\n", strchr(av[1], atoi(av[2])));
}

#include <libc.h>

int	main(int ac, char **av)
{
	(void)ac;

	printf("the value of ft_strncmp is %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	printf("the value of strncmp is %d\n", strncmp(av[1], av[2], atoi(av[3])));
}

