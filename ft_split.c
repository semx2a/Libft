/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:23:41 by seozcan           #+#    #+#             */
/*   Updated: 2021/11/30 17:00:11 by seozcan          ###   ########.fr       */
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

static char	**ft_freed(char **d, long int j)
{
	while (j)
	{
		free(d[j]);
		j--;
	}
	free(d);
	return (0);
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
				return(ft_freed(d, j));
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
	if (!d)
		return (NULL);
	d[t_count] = 0;
	d = ft_substrcpy(s, a, d);
	return (d);
}

#include <libc.h>

int	main(int ac, char **av)
{
	//char const	*s = "---1-2-3-4-5-6-7-8--8-8--8-4------4--4---";
	//char	a = '-';
	int 	i = 0;
	char	**d;

	//d = ft_split(s, a);
	d = ft_split(av[1], av[2][0]);
	if (!d)
		return (0);
	printf("ft_split returns\n");
	while (d[i])
	{
		printf("i=%i >%s\n", i, d[i]);
		i++;
	}
	return (0);
}
