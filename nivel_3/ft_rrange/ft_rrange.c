/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:37:15 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/22 14:27:02 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_len(int start, int end)
{
	int	len;

	len = end - (start);
	if (len < 0)
		len = -len;
	len = len + 1;
	return (len);
}

int     *ft_rrange(int start, int end)
{
	int *array;
	int i = 0;
	int	ppio = end;

	array = (int *) malloc (sizeof(int) * (ft_len(start, end)));
	
	if (end > start)
	{
		while (ppio >= start)
		{
			array[i] = ppio;
			i++;
			ppio--;
		}
	}
	else 
	{
		while (ppio <= start)
		{
			array[i] = ppio;
			i++;
			ppio++;
		}
	}
	return (array);
}

int	main(void)
{
	int start = 0;
	int end = -3;
	int i = 0;
	int *array;
	array = ft_rrange(start, end);

	while (i  < ft_len(start, end))
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}
