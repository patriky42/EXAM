/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:14:35 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/19 16:19:38 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 128;
	unsigned char bit;

	while (i > 0)
	{
		bit = (octet & 1);
		if (bit == 0)
			write (1, "0", 1);
		else 
			write (1, "1", 1);
		i = i/2;
	}
}

int	main(void)
{
	unsigned char bit = 'A';
	print_bits(bit);
	return (0);
}
