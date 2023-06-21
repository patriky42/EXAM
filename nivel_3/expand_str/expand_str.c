/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 08:46:27 by pabastid          #+#    #+#             */
/*   Updated: 2023/06/19 12:55:40 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand_str(char *str)
{
	int	i = 0;

	while (str[i] && (str[i] == 32 || str[i] == 9))
		i++;
	while(str[i])
	{
		if ((str[i] == 32 || str[i] == 9) && ((str[i + 1] == 32 || str[i + 1] == 9) || str[i + 1] == '\0'))
			i++;
		else if (str[i] != '\0' && str[i] != 32 && str[i] != 9)
		{
			write (1, &str[i], 1);
			i++;
		}
		else if (str[i] == 32 || str[i] == 9)
		{
			write (1, "   ", 3);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		expand_str(argv[1]);
	}
	write (1, "\n", 1);
	return (0);}
