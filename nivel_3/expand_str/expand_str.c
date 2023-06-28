/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 08:46:27 by pabastid          #+#    #+#             */
/*   Updated: 2023/06/28 14:45:36 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if ((argv[1][i] == ' ' || argv[1][i] == '\t') && (argv[1][i+1] == ' ' || argv[1][i+1] == '\t' || argv[1][i+1] == '\0'))
				i++;
			else if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				write (1, "   ", 3);
				i++;
			}
			else if (argv[1][i] != ' ' || argv[1][i] != '\t' || argv[1][i] != '\0')
			{
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
