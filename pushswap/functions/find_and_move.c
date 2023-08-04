/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 09:43:50 by pabastid          #+#    #+#             */
/*   Updated: 2023/08/04 07:16:38 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_node *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

int	find_min(t_node **lst)
{
	t_node	*tmp;
	int		i;

	tmp = *lst;
	i = 0;
	while (tmp)
	{
		if (is_min(tmp->index, lst))
			return (i);
		tmp = tmp -> next;
		i++;
	}
	return (0);
}

int	find_max(t_node **lst)
{
	t_node	*tmp;
	int		i;

	tmp = *lst;
	i = 0;
	while (tmp)
	{
		if (is_max(tmp->index, lst))
			return (i);
		tmp = tmp -> next;
		i++;
	}
	return (0);
}

void	min_to_top(t_node **lst, char c)
{
	t_node		*tmp;
	int			size;

	tmp = *lst;
	size = ft_lstsize(*lst);
	while (find_min(lst) <= size / 2 && find_min(lst))
		rotate(lst, c);
	while (find_min(lst) > size / 2)
		rrotate(lst, c);
}

void	max_to_top(t_node **lst, char c)
{
	t_node		*tmp;
	int			size;

	tmp = *lst;
	size = ft_lstsize(*lst);
	while (find_max(lst) <= size / 2 && find_max(lst))
		rotate(lst, c);
	while (find_max(lst) > size / 2)
		rrotate(lst, c);
}
