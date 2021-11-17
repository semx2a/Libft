/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:23:41 by seozcan           #+#    #+#             */
/*   Updated: 2021/11/18 00:37:14 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_substrcpy(char const *s, char a, char **d)
{	
	size_t			w_count;
	unsigned int	i;
	unsigned int	j;

	w_count = 0;
	i = -1;
	j = 0;
	while (s[++i])
	{
		while (!ft_strchr(&a, s[i + w_count]))
		{
			w_count++;
			if (ft_strchr(&a, s[(i + w_count)]))
			{
				d[j] = ft_substr(s + i, 0, w_count);
				i = i + w_count;
				w_count = 0;
				j++;
				if (!s[i])
					return (d);
			}
		}
	}
	return (d);
}

char	**ft_split(char const *s, char a)
{
	char	**d;
	size_t	t_count;
	int		i;

	t_count = 0;
	i = -1;
	d = 0;
	if (s)
	{
		while (s[++i])
			if (!ft_strchr(&a, s[i]) && ft_strchr(&a, s[i + 1]))
				t_count++;
		d = (char **)malloc(sizeof(char *) * (t_count + 1));
		d = ft_substrcpy(s, a, d);
		d[t_count] = 0;
	}
	return (d);
}

/*
#include <libc.h>
int	main(void)   
{
	int	i = 0;
	char	**d = ft_split("--1-2--3---4----5-----42", '-');

	printf("ft_split returns\n");
	while (d[i])
	{
		printf(">d[%d] = '%s' | len == %lu\n", i, d[i], strlen(d[i]));
		i++;
	}
	return (0);
}*/
