/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:24:30 by seozcan           #+#    #+#             */
/*   Updated: 2021/11/11 16:00:08 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	unsigned int	i;
	unsigned int	slen;

	i = 0;
	slen = ft_strlen(s);
	if (!s)
		return (0);
	if (slen < start)
	{
		d = (char *)malloc(sizeof(char));
		d[i] = '\0';
		return (d);
	}
	d = (char *)malloc(sizeof(char) * ((slen - start) + 1));
	while (len-- && start < slen)
		d[i++] = s[start++];
	d[i] = '\0';
	return (d);
}
