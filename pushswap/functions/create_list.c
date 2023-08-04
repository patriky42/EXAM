/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:24:11 by pabastid          #+#    #+#             */
/*   Updated: 2023/08/04 07:45:01 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index(int n, t_node **lst)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = *lst;
	while (temp)
	{
		if (temp->n < n)
			i++;
		temp = temp->next;
	}
	return (i);
}

void	putindex(t_node **lst)
{
	t_node	*temp;

	temp = *lst;
	while (temp)
	{
		temp->index = ft_index(temp->n, lst);
		temp = temp->next;
	}
}

void	ft_addback(t_node **lst, int n)
{
	t_node	*temp;
	t_node	*last;

	temp = (t_node *)malloc(sizeof(t_node));
	if (!temp)
		exit(1);
	temp->n = n;
	temp->index = 0;
	temp->next = NULL;
	last = ft_last(lst);
	last->next = temp;
	temp->prev = last;
}

t_node	*ft_last(t_node **lst)
{
	t_node	*temp;

	temp = *lst;
	if (!temp)
		return (NULL);
	while (temp->next)
		temp = temp->next;
	return (temp);
}

t_node	*create_list(int argc, char **argv)
{
	t_node	*temp;
	int		i;

	if (!argv)
		return (NULL);
	i = 2;
	temp = (t_node *)malloc(sizeof(t_node));
	if (!temp)
		exit(1);
	temp->next = NULL;
	temp->prev = NULL;
	temp->n = ft_atoi(argv[1]);
	temp->index = 0;
	while (i < argc)
	{
		ft_addback(&temp, ft_atoi(argv[i]));
		i++;
	}
	putindex(&temp);
	return (temp);
}
