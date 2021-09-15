/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:00:50 by sozcan            #+#    #+#             */
/*   Updated: 2021/09/14 14:13:45 by sozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libc.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (b[i] && i < len )
	{
		b[i] = c;
		i++;
	}
	return (b);
}

int	main()
{
	char	*b;
	int	c;
	size_t	len;

	b = "";
	c = 0;
	len = strlen(b);
	memset(b, c, len);
	return (0);
}
