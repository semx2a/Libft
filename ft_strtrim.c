/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:05:07 by seozcan           #+#    #+#             */
/*   Updated: 2021/10/30 17:35:19 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!*s1 || !*set)
		return (NULL);
	while (s1[++i])
		if (ft_strchr(set, s1[i]) != 0)
			j++;
	s2 = (char *)malloc(sizeof(char) * (i - j) + 1);
	i = -1;
	j = -1;
	while (s1[++i])
		if (ft_strchr(set, s1[i]) == 0)
			s2[++j] = s1[i];
	s2[++j] = '\0';
	return (s2);
}
