/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:42:14 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/17 13:15:28 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp; 

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main (void)
{
	int a = 7;
	int b = 8;
	ft_swap(&a, &b);
	printf("a: %d,b:  %d\n", a, b);
	return (0);
}
	
