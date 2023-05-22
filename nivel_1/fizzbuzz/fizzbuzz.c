/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 23:18:54 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/17 11:20:44 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int	n)
{
	char str[10] = "0123456789";

	if (n > 9)
		ft_putnbr(n / 10);
	write (1, &str[n % 10], 1);
}

int	main(void)
{
	int	n = 1;

	while (n <= 100)
	{
		if (n % 5 == 0 && n % 3 == 0)
			write (1, "fizzbuzz", 8);
		else if (n % 5 == 0)
			write (1, "fizz", 4);
		else if (n % 3 == 0)
			write (1, "buzz", 4);
		else 
			ft_putnbr (n);
		write (1, "\n", 1);
		n++;
	}
	return (0);
}
