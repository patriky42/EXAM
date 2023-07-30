/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:38:43 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/30 15:05:28 by pabastid         ###   ########.fr       */
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
	(*lst)->prev = NULL; //es lo mismo que: first->next->prev = NULL;
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
	(*lst)->prev = NULL; //es lo mismo que: last->prev = NULL;
	(*lst)->next = first; //es lo mismo que: last->next = first;
	if (c)
		ft_printf("rr%c\n", c);
}

/*void	push(t_node **from, t_node **to, char c)
{
	t_node	*from_first;
	t_node	*to_first;

	from_first = *from;
	to_first = *to;
	if (from == NULL)
		return ;
	if (from_first)
	{
		if (from_first->next)
			from_first->next->prev = NULL;
		*from = from_first->next;
		if (to_first != NULL)
			to_first->prev = from_first;
		from_first->next = to_first;
		from_first->prev = NULL;
		*to = from_first;
	}
	if (c)
		ft_printf("p%c\n", c);
}*/

void	push(t_node **src, t_node **dst, char c)
{
	t_node	*temp;

	temp = *src;
	*src = temp->next;
	if (*src)
		(*src)->prev = NULL;
	temp->next = *dst;
	if (*dst)
		(*dst)->prev = temp; //si habia algo en dst, el anterior tiene que ser temp; 
	*dst = temp;
	if (c)
		ft_printf("p%c\n", c);
}
