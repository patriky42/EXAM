/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:34:00 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/22 13:36:38 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(int start, int end)
{
	int len = end - start;
	
	if (len < 0)
		len = -len;
	len = len + 1; 
	return (len);
}

int     *ft_range(int start, int end)
{
	int	*array;
	int i = 0;
	int ppio = start;

	array = (int*) malloc (sizeof(int) * (ft_len(start, end)));
	
	if (start <= end)
	{
		while (ppio <= end)
		{
			array[i] = ppio;
			i++;
			ppio++;
		}
	}
	else
	{	
		while (ppio >= end)
		{
			array[i] = ppio;
			i++;
			ppio--;
		}
	}
	return (array);
}

int	main(void)
{
	int start = 0;
	int end = -3;
	int 	*array  = ft_range(start, end);
	int i = 0;
	while (i < ft_len(start, end))
	{
		printf("%d ", array[i]);
		i++;
	}	
}
		



