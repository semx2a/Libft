/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mains.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:34:16 by sozcan            #+#    #+#             */
/*   Updated: 2021/09/14 15:36:55 by sozcan           ###   ########.fr       */
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

int	main()
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = "ceci est une shaine de test";
	s2 = "ceci est une chaine de test";
	n = 19;
	printf("the value of ft_strncmp is %d\n", ft_strncmp(s1, s2, n));
	printf("the value of strncmp is %d\n", strncmp(s1, s2, n));
}
