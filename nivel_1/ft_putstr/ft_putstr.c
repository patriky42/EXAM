/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 23:34:03 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/17 11:36:33 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char * str)
{
	int	i = 0;

	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char str[15] = "hola perra fea";
	ft_putstr(str);
	return (0);
}
