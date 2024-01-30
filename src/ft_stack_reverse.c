/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:56:10 by seozcan           #+#    #+#             */
/*   Updated: 2024/01/30 13:08:32 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	reverse(t_stack *s)
{
	t_node	*tmp;
	void	*content;

	if (stack_size(s) > 1)
	{
		tmp = s->tail;
		if (!tmp)
			return ;
		content = tmp->data;
		s->tail = tmp->prev;
		s->tail->next = NULL;
		putfront_stack(s, content);
		free(tmp);
	}
}
