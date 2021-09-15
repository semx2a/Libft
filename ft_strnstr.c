/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:33:40 by sozcan            #+#    #+#             */
/*   Updated: 2021/09/15 20:32:32 by sozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[i])
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && i < len)
		{
			if (!needle[j + 1])
				return (haystack + (i - j));
			j++;
			i++;
		}
		i++;
	}
	return (0);
}
