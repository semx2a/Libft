/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:27:45 by seozcan           #+#    #+#             */
/*   Updated: 2021/10/30 17:33:45 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*d;

	i = -1;
	d = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!d)
		return (NULL);
	while (s[++i])
		d[i] = f(i, s[i]);
	d[i] = '\0';
	return (d);
}
