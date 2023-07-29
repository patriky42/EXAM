/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:38:43 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/29 13:19:50 by pabastid         ###   ########.fr       */
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
	first->next = secod->next;
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
	last = ft_last(&first);
	if (first->next == NULL)
		return ;
	*lst = first->next;
	(*lst)->prev = NULL; //es lo mismo que: first->next->prev = NULL;
	last->next = first;
	first->next = NULL;
	first-prev = last;
	if (c)
		ft_print("r%c\n", c);
}

void	rrotate(t_node **lst, char c)
{
	t_node	*first;
	t_node	*last;

	first = *lst;
	last = ft_last(&first);
	last->prev->next = NULL;
	first->prev = last;
	*lst = last;
	(*lst)->prev = NULL; //es lo mismo que: last->prev = NULL;
	(*lst)->next = first; //es lo mismo que: last->next = first;
	if (c)
		ft_printf("rr%c\n", c);
}

void	push(t_node **from, t_node **to)
{
	t_node	*from_first;
	t_node	*to_first;

	from_first = *from;
	to_first = *to;
	if (from == NULL)
		return ;
	if (from_first)
	{
		if (from_first->next->prev == NULL)
			*frrom = NULL;
		else
		{
			from_first->next->prev = NULL;
			*from = from_first->next;
		}
		if (to_first != NULL)
			to_first->prev = from_first;
		from_first->next = to_first;
		from_first->prev = NULL;
		*to = from_first;
	}
	if (c)
		ft_printf("p%c\n", c);
}

/*void	push(t_int **a, t_int **b, char c)
{
	t_int	*temp;

	temp = *a;
	*a = temp->next;
	if (*a)
		(*a)->prev = NULL;
	temp->next = *b;
	if (*b)
		(*b)->prev = temp;
	*b = temp;
	if (c)
		ft_printf("p%c\n", c);
}
*/
