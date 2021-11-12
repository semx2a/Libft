/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:51:07 by seozcan           #+#    #+#             */
/*   Updated: 2021/11/07 12:27:23 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	a;

	i = -1;
	a = c;
	while (s[++i])
		if (s[i] == a)
			return ((char *)s + i);
	if (s[i] == '\0' && a == 0)
		return ((char *)s + ft_strlen(s));
	return (0);
}
