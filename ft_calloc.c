/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:23:11 by seozcan           #+#    #+#             */
/*   Updated: 2021/10/24 21:43:28 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	arr;

	arr = size * count;
	if (count == 0 || size == 0)
		return (NULL);
	ptr = malloc(arr);
	while (arr--)
	{
		*ptr = '\0';
		ptr++;
	}
	return (ptr);
}
