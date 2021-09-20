/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:37:39 by sozcan            #+#    #+#             */
/*   Updated: 2021/09/18 18:51:54 by sozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libc.h>

size_t	ft_strlcpy(char *dest, char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (src[j] && j <= (destsize - 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	if (i >= destsize)
		return (i);
	return (i);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("the value of ft_strlcpy is %lu\n", ft_strlcpy(av[1], av[2], strlen(av[1])));
	printf("the value of strlcpy is %lu\n", strlcpy(av[3], av[4], strlen(av[3])));
}
