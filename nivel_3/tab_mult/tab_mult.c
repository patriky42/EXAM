/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:13:09 by pabastid          #+#    #+#             */
/*   Updated: 2023/06/28 11:44:16 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int res = 0;
	int i = 0;

	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res);
}

void putnbr(int num)
{
	char	base[10] = "0123456789";

	if (num > 9)
		putnbr(num / 10);
	write (1, &base[num % 10], 1);
}

void tab_mult(int num)
{
	int n = 1;
	int res;

	while (n <= 9)
	{
		putnbr (n);
		write (1, " x ",3);
		putnbr (num);
		write (1, " = ", 3);
		res = n * num;
		putnbr (res);
		write (1, "\n", 1);
		n++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
	{
		tab_mult(ft_atoi(argv[1]));
	}
	write (1, "\n", 1);
	return (0);
}
