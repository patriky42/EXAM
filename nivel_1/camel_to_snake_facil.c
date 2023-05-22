/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake_facil.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:03:15 by pabastid          #+#    #+#             */
/*   Updated: 2023/04/17 16:10:48 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char ** argv)
{
	int	i = 0;

	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			argv[1][i] = argv[1][i] + 32;
			write (1, "_", 1);
		}
		write (1, &argv[1][i], 1);
		i++;
	}
	return (0);
}
