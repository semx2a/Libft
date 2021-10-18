/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:22:30 by seozcan           #+#    #+#             */
/*   Updated: 2021/10/19 00:21:44 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	const char	*s2;

	if (!s1)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * sizeof(s1));
	s2 = s1;
	return ((char *)s2);
}
