/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:29:49 by seozcan           #+#    #+#             */
/*   Updated: 2021/10/16 18:02:29 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;

	str1 = s1 - 1;
	str2 = s2 - 1;
	while (str1++ && str2++ && n--)
	{
		if (*str1 > *str2)
			return (*str1 - *str2);
		else if (*str1 < *str2)
			return (*str1 - *str2);
	}
	return (0);
}
