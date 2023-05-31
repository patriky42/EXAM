/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:20:10 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/31 12:47:53 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *n)
{
	int	res = 0;
	int	i = 0;

	while (n[i])
	{
		res = (n[i] - '0') + (res * 10);
		i++;
	}
	return (res);
}

void	print_hex(int num)
{
	char base[] = "0123456789abcdef";

	if (num > 16)
		print_hex (num / 16);
	write (1, &base[num % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		print_hex (num);
	}
	write (1, "\n", 1);
	return (0);
}
