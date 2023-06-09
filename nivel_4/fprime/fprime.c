/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:09:22 by pabastid          #+#    #+#             */
/*   Updated: 2023/06/21 14:24:12 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(int num)
{
	int	prime = 2;

	if (num == 1)
		printf ("1");
	while (num >= prime)
	{
		if (num / prime == 0)
		{
			printf ("%d", prime);
			if (num != prime)
				printf ("*");
			num = num / prime;
		}
		else
			prime++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
	{
		fprime (atoi(argv[1]));
	}
	printf ("\n");
	return (0);
}

