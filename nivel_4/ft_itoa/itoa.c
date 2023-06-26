/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:40:53 by pabastid          #+#    #+#             */
/*   Updated: 2023/06/23 12:37:48 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char	*ft_itoa(int nbr)
{
	long int	n = nbr;
	char *res;
	int	len = 0;

	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	res = (char *) malloc (sizeof(char) * (len + 1));
	res[len] = '\0';
	len--;
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n)
	{
		res[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (res);
}

int main (void)
{
	printf("%s\n",ft_itoa(-42));
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(42));
	printf("%s\n",ft_itoa(INT_MAX));
	printf("%s\n",ft_itoa(INT_MIN));
}
