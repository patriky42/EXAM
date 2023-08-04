/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:45:26 by pabastid          #+#    #+#             */
/*   Updated: 2023/08/04 07:36:05 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	if_100(t_node **a, t_node **b)
{
	int	maxchunk;

	maxchunk = 20;
	while (*a)
	{
		sort_chunk(a, b, maxchunk);
		maxchunk += 20;
	}
	while (*b)
	{
		max_to_top(b, 'b');
		push (b, a, 'a');
	}
}
