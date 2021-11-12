/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:23:41 by seozcan           #+#    #+#             */
/*   Updated: 2021/11/12 18:00:26 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_substrcpy(char const *s, char a, char **d, size_t t_count)
{	
	size_t	w_count;
	int		len;
	int		i;

	len = 0;
	w_count = 0;
	i = 0;
	while (s[i++])
		len++;
	while (s[--len] && t_count)
	{
		if (ft_strrchr(&a, s[len]) != 0)
		{
			d[--t_count] = ft_substr(s, len + 1, w_count);
			w_count = 0;
			len--;
		}
		w_count++;
		d[--t_count] = ft_substr(s, len + 1, w_count);
	}
	return (d);
}

char	**ft_split(char const *s, char a)
{
	char	**d;
	size_t	t_count;
	int		i;

	t_count = 0;
	i = 0;
	d = 0;
	if (s)
	{
		while (s[i++])
			if (ft_strchr(&a, s[i]) != 0)
				t_count++;
		t_count++;
		d = (char **)malloc(sizeof(char *) * (t_count + 1));
		d[t_count] = 0;
		d = ft_substrcpy(s, a, d, t_count);
	}
	return (d);
}
