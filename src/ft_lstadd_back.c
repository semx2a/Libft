/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:31:52 by seozcan           #+#    #+#             */
/*   Updated: 2024/02/02 17:34:55 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last_elem;

	if (alst)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			last_elem = ft_lstlast(*alst);
			last_elem->next = new;
		}
	}
}
