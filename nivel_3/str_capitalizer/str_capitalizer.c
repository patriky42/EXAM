/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:01:34 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/31 13:52:04 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'z' && str[i] >= 'a') && (str[i - 1] == ' ' || str[i - 1] == '\t' || i == 0))
			str[i] = str[i] - 32;
		else if ((str[i] <= 'Z' && str[i] >= 'A') && (str[i - 1] != ' ' && str[i - 1] != '\t' && i != 0))
			str [i] = str[i] + 32;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
		write (1, "\n", 1);
	else 
	{
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
