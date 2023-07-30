/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:17:06 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/30 16:11:39 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
