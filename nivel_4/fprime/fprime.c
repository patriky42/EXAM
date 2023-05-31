/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:54:27 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/23 11:20:08 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int num)
{
	int prime = 2;

	if (num == 2)
		printf("1");
	while (num >= prime)
	{
		if (num % prime == 0)
		{
			printf ("%d", prime);
			if (num != prime)
				printf("*");
			num = num / prime;
		}
		else 
			prime++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		fprime(atoi(argv[1]));
	}
	printf ("\n");
	return (0);
}
