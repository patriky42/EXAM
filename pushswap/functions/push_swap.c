/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:04:41 by pabastid          #+#    #+#             */
/*   Updated: 2023/08/04 08:06:54 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void miprintf(t_node **lst)
{
	t_node *temp;

	temp = *lst;
	while (temp)
	{
		printf("n = %d, index =%d\n", temp->n, temp->index);
		temp = temp->next;
	}
}

int	main(int argc, char **argv)
{
	t_node *a;
	t_node *b;

	if (argc == 1)
		return (0);
	check_all(argc, argv);
	a = create_list(argc, argv);
	b = NULL;
	if (is_sorted(&a))
		printf("ordenada\n");
	if (!is_max(0, &a))
		printf("no es maximo\n");
	if (!is_min(3, &a))
		printf("no es minimo\n");
	miprintf(&a);
	/*swap(&a, 'a');
	miprintf(&a);
	rotate(&a, 'a');
	miprintf(&a);
	rrotate(&a, 'a');
	miprintf(&a);
	push(&a, &b, 'b');
	push(&a, &b, 'b');
	push(&a, &b, 'b');
	miprintf(&a);
	printf("*\n");
	miprintf(&b);*/
	if (argc <= 4)
	{
		while (!is_sorted(&a))
			if_three(&a, 'a');
	}
	else if (argc <= 6)
		if_five(&a, &b);
	else if (argc <= 101)
		if_100(&a, &b);
	miprintf(&a);
	return (0);
}
