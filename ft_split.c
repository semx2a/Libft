/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:23:41 by seozcan           #+#    #+#             */
/*   Updated: 2021/11/29 20:45:52 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(char const *s, char a)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (!ft_strchr(&a, s[i]))
			count++;
		else if (ft_strchr(&a, s[i]) && !ft_strchr(&a, s[i + 1]))
			return (count);
		i++;
	}
	return (count);
}

static void	ft_freed(char **d, long int j)
{
	while (j)
	{
		free(d[j]);
		j--;
	}
	free(d);
}

static char	**ft_substrcpy(char const *s, char a, char **d)
{	
	long int	w_count;
	long int	i;
	long int	j;

	w_count = 0;
	i = -1;
	j = 0;
	while (++i < (long)ft_strlen(s))
	{
		if (ft_count(s + i, a))
		{
			w_count = ft_count(s + i, a);
			d[j] = ft_substr(s + i, 0, w_count);
			if ((long)ft_strlen(d[j]) != w_count)
			{
				ft_freed(d, j);
				return (NULL);
			}
			i = i + w_count;
			w_count = 0;
			j++;
		}
	}
	return (d);
}

char	**ft_split(char const *s, char a)
{
	char		**d;
	long int	t_count;
	int			i;

	if (!s)
		return (NULL);
	t_count = 0;
	d = 0;
	i = -1;
	while (s[++i])
		if (!ft_strchr(&a, s[i]) && ft_strchr(&a, s[i + 1]))
			t_count++;
	d = (char **)malloc(sizeof(char *) * (t_count + 1));
	if (d)
	{
		d[t_count] = NULL;
		if (!t_count)
			return (d);
		else if (!ft_strchr(s, a))
			d[0] = ft_strdup(s);
		else
			d = ft_substrcpy(s, a, d);
		return (d);
	}
	return (NULL);
}
