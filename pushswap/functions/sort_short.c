/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:22:28 by pabastid          #+#    #+#             */
/*   Updated: 2023/08/01 17:20:50 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_three(t_node **lst, char c)
{
	t_node	*first;
	t_node	*last;

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

void	if_five(t_node **src, t_node **dst)
{
	t_node	*tmp;

	tmp = *lst;
}

int	find_min(t_node **lst)
{
	t_node	*tmp;
	int i;
	int n;

	tmp	= *lst;
	i = 0;
	n = tmp->index;
	while (tmp)
	{
		if (is_min(n, &lst)
				break ;
				i++;
		tmp = tmp->next;
		}

}

int size_lst(t_node **lst)
{
	t_node *tmp;
	int	size;

	tmp = *lst;
	size = 0;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}


