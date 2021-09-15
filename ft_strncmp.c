/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:10:46 by sozcan            #+#    #+#             */
/*   Updated: 2021/09/14 15:36:13 by sozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <ctype.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && i < n)
	{	
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = "ceci est une shaine de test";
	s2 = "ceci est une chaine de test";
	n = 19;
	printf("the value of ft_strncmp is %d\n", ft_strncmp(s1, s2, n));
	printf("the value of strncmp is %d\n", strncmp(s1, s2, n));
}
