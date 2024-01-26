/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:20:40 by seozcan           #+#    #+#             */
/*   Updated: 2023/01/11 17:13:53 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	print_stab(char **stab)
{
	int	i;

	i = 0;
	while (stab[i])
	{
		printf("tab[%02i] = [%s]\n", i, stab[i]);
		i++;
	}
}
