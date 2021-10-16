/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:07:28 by seozcan           #+#    #+#             */
/*   Updated: 2021/10/12 16:44:52 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)src;
	while (dst[i])
		i++;
	while (str[j] && i + j < (dstsize - 1))
	{
		dst[i + j] = str[j];
		j++;
	}
	dst[i + j] = '\0';
	while (str[j])
		j++;
	if (i + j >= dstsize)
		return (dstsize + j);
	return (dstsize + j);
}
