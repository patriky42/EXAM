/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:38:43 by pabastid          #+#    #+#             */
/*   Updated: 2023/08/04 07:28:36 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **lst, char c)
{
	t_node	*first;
	t_node	*second;

	if (!*lst || !(*lst)->next)
		return ;
	first = *lst;
	second = first->next;
	first->next = second->next;
	second->next = first;
	second->prev = NULL;
	first->prev = second;
	if (first->next)
		first->next->prev = first;
	*lst = second;
	if (c)
		ft_printf("s%c\n", c);
}

void	rotate(t_node **lst, char c)
{
	t_node	*first;
	t_node	*last;

	first = *lst;
	last = ft_last(lst);
	if (first->next == NULL)
		return ;
	*lst = first->next;
	(*lst)->prev = NULL;
	last->next = first;
	first->next = NULL;
	first->prev = last;
	if (c)
		ft_printf("r%c\n", c);
}

void	rrotate(t_node **lst, char c)
{
	t_node	*first;
	t_node	*last;

	first = *lst;
	last = ft_last(&first);
	if (!first->next)
		return ;
	last->prev->next = NULL;
	first->prev = last;
	*lst = last;
	(*lst)->prev = NULL;
	(*lst)->next = first;
	if (c)
		ft_printf("rr%c\n", c);
}

void	push(t_node **src, t_node **dst, char c)
{
	t_node	*temp;

	temp = *src;
	*src = temp->next;
	if (*src)
		(*src)->prev = NULL;
	temp->next = *dst;
	if (*dst)
		(*dst)->prev = temp;
	*dst = temp;
	if (c)
		ft_printf("p%c\n", c);
}
