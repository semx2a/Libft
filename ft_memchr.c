/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:32:53 by seozcan           #+#    #+#             */
/*   Updated: 2021/10/16 16:56:29 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*src;
	unsigned char	a;

	src = s;
	a = c;
	while (n--)
		if (*src++ == c)
			return ((char *)src);
	return (NULL);
}