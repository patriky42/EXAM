/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   about_chunks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:39:31 by pabastid          #+#    #+#             */
/*   Updated: 2023/08/04 07:40:41 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_chunk(t_node **a, t_node **b, int maxchunk)
{
	static int	n = 0;

	if (n == 0)
		n = maxchunk / 2;
	push(a, b, 'b');
	if ((*b)->index < maxchunk - n && (*b)->next)
		rotate (b, 'b');
}

static void	rotate_chunk(t_node **a, t_node **b, int maxchunk, int i)
{
	while (i <= (ft_lstsize(*a) / 2) && i != 0)
	{
		rotate (a, 'a');
		i--;
	}
	while (i > (ft_lstsize(*a) / 2) && i != ft_lstsize(*a))
	{
		rrotate (a, 'a');
		i++;
	}
	push_chunk(a, b, maxchunk);
}

void	sort_chunk(t_node **a, t_node **b, int maxchunk)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = *a;
	while (ft_lstsize(*b) < maxchunk)
	{
		if (tmp->index < maxchunk)
		{
			rotate_chunk(a, b, maxchunk, i);
			i = 0;
			tmp = *a;
		}
		else
			i++;
		tmp = tmp->next;
	}
}
