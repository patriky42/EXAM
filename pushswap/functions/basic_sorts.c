/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:19:12 by pabastid          #+#    #+#             */
/*   Updated: 2023/08/02 12:02:46 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_basic(t_node **lst)
{
	while (!is_sorted(lst))
	{
		if (is_max((*lst)->index, lst) || is_max((*lst)->next->index, lst))
			rotate(lst, 'a');
		else
			rrotate(lst, 'a');
	}
}

int	is_min(int n, t_node **lst)
{
	t_node	*temp;

	temp = *lst;
	while (temp)
	{
		if (n > temp->index)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	is_max(int n, t_node **lst)
{
	t_node	*temp;

	temp = *lst;
	while (temp)
	{
		if (n < temp->index)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	is_sorted(t_node **lst)
{
	t_node	*temp;

	temp = *lst;
	while (temp->next)
	{
		if (temp->index > temp->next->index)
			return (0);
		temp = temp->next;
	}
	return (1);
}
