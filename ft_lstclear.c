/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:33:59 by seozcan           #+#    #+#             */
/*   Updated: 2021/11/04 19:04:41 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_elem;

	if (lst)
	{
		while (*lst)
		{
			next_elem = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = next_elem;
		}
	}
}
