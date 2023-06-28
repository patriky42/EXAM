/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:07:00 by pabastid          #+#    #+#             */
/*   Updated: 2023/06/28 12:44:15 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int res = 0;
	int i = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res);
}

int	is_prime (int num)
{
	int tester = num - 1;

	while (tester > 1)
	{
		if (num % tester == 0)
			return (0); 
		tester--;
	}
	return(1);
}

int	sum_prime(int num)
{
	int sum = 0;

	if (num == 1)
		sum = 1;
	while (num > 1)
	{
		if (is_prime(num) == 1)
			sum = sum + num;
		num--;
	}
	return (sum);
}

void putnbr(int num)
{
	char base [10] = "0123456789";

	if (num > 9)
		putnbr (num / 10);
	write (1, &base[num % 10], 1);
}

int main (int argc, char **argv)
{
	if(argc != 2 || ft_atoi(argv[1]) < 0)
		write (1, "0", 1);
	else
		putnbr(sum_prime(ft_atoi(argv[1])));
	write (1, "\n", 1);
}



