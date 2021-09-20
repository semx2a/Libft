/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:01:38 by sozcan            #+#    #+#             */
/*   Updated: 2021/09/18 17:58:00 by sozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include <libc.h>
size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && j < (dstsize - 1))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	if (j >= dstsize)
		return (0);		
	return (i);
}


int	main(int ac, char **av)
{
	(void)ac;
	printf("the value of ft_strlcat is %lu\n", ft_strlcat(av[1], av[2], strlen(av[1])));
	printf("the value of strlcat is %lu\n", strlcat(av[3], av[4], strlen(av[3])));
}
