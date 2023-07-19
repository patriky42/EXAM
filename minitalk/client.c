/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:26:46 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/18 15:57:50 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
//#include "ft_printf.h"
//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	speller (int pid, char c)
{
	int i;
	int bit;

	i = 0;
	bit = 0;

	while (i < 8)
	{
		if (c & 128)
			bit = SIGUSR1;
		else
			bit = SIGUSR2;
		if (kill(pid, bit))
			exit (1);
		usleep(100);
		c = c << 1;
		i++;
	}
	return(0);
}

int	main(int argc, char **argv)
{
	int i;
	int pid;

	i = 0;
	pid = atoi(argv[1]);

	if (argc != 3)
		return (0);
	while (argv[2][i])
	{
		speller(pid, argv[2][i]);
		i++;
	}
	return (0);
}
