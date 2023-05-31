/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:31:45 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/31 12:59:50 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int	i = 0;

	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] == ' ' || str[i + 1] == '\t'))
			i++;
		else if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] != ' ' && str[i + 1] != '\0'))
		{
			write (1, &str[i], 1);
			i++;
		}
		else if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] == '\0'))
			break;
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		epur_str(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}
