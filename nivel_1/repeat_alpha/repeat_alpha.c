/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 23:53:18 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/17 14:12:30 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int i = 0;
	int repeat = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			repeat = str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			repeat = str[i] - 'A' + 1;
		else 
			repeat = 1;
		while (repeat > 0)
		{
			write (1, &str[i], 1);
			repeat--;
		}
	repeat = 1;
	i++;
	}
}

int	main(int argc, char **argv)
{

	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}

