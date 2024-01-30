/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_putback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:39:33 by seozcan           #+#    #+#             */
/*   Updated: 2024/01/30 13:07:18 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	putback_stack(t_stack *stack, void *content)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return ;
	new = new_node(content);
	if (stack->tail)
		stack->tail->next = new;
	else
		stack->head = new;
	stack->tail = new;
}
