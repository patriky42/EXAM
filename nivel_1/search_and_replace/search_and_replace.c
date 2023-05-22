/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:42:36 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/22 11:56:38 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int i = 0;
	if(argc == 4)
	{
		while (argv[1][i] && !argv[2][1] && !argv[3][1])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1,"\n", 1);
	return (0);
}
