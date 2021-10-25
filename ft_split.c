/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:23:41 by seozcan           #+#    #+#             */
/*   Updated: 2021/10/25 15:24:24 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib>

char	**ft_split(char const *s, char a)
{
	char	**d;
	size_t	tabs;
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (!*s || !a)
		return (0);
	while (s[++i])
		if (ft_strchr(s + i, a) == 0)
			tabs++;
	d =
	
	

}

int	main()
{
	char const	*s;
	char	a;

	*s = "ceci;est;une;chaine;de;test";
	a = ';';
	ft_split(s, a);
	return (0);



}
