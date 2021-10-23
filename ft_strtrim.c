/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:05:07 by seozcan           #+#    #+#             */
/*   Updated: 2021/10/23 14:00:31 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	 *ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int	i;
	int	j;

	i = -1;
	j = -1;
	if (!*s1 || !*set)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * strlen(s1) + 1);
	while (s1[++i])
		if (strchr(set, s1[i]) == 0)
			s2[++j] = s1[i];
	s2[++j] = '\0';
	return (s2);
}

#include <libc.h>

int	main()
{
	char const	*s1;
	char const	*set;

	s1 = "ceci ;est ;une ;chaine ;de ;test";
	set = " ;";
	printf("ft_strtrim returns\n>%s\n", ft_strtrim(s1, set));
	return (0);
}
