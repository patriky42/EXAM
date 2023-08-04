/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:22:28 by pabastid          #+#    #+#             */
/*   Updated: 2023/08/02 15:35:38 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_three(t_node **lst, char c)
{
	t_node	*first;
	t_node	*last;

	while (!is_sorted(lst))
	{
		first = *lst;
		last = ft_last(lst);
		if (is_max(last->index, lst) || is_min(first->index, lst)
			|| (is_max(first->index, lst) && is_min(last->index, lst)))
			swap(lst, c);
		else if (is_max(first->next->index, lst))
			rrotate(lst, c);
		else
			rotate(lst, c);
	}
}

void	if_five(t_node **a, t_node **b)
{
	while (ft_lstsize(*a) > 3)
	{
		min_to_top(a, 'a');
		push(a, b, 'b');
	}
	if_three(a, 'a');
	while (*b)
	{
		push(b, a, 'a');
	}
}
