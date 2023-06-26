/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:14:39 by pabastid          #+#    #+#             */
/*   Updated: 2023/04/17 16:02:50 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int caps = 0;
	char	*str_new;

	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			caps++;
		i++;
	}
	str_new = (char *)malloc(sizeof(char)*(caps+i+1));

	i = 0;
	int	j = 0;

	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			str_new[j] = '_';
			j++;
			str_new[j] = argv[1][i] + 32;
			write(1, &str_new[j], 1);
			i++;
			j++;
		}
		str_new[j] = argv[1][i];
		write(1, &str_new[j], 1);
		i++;
		j++;
	}
	str_new[j] = 0;
	j = 0;
	while (str_new[j])
	{
		write(1, &str_new[j], 1);
		j++;
	}

	return (0);
}
