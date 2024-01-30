/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_putfront.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:42:20 by seozcan           #+#    #+#             */
/*   Updated: 2024/01/30 13:08:25 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	putfront_stack(t_stack *stack, void *content)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return ;
	new = new_node(content);
	if (stack->head)
		stack->head->prev = new;
	else
		stack->tail = new;
	stack->head = new;
}
