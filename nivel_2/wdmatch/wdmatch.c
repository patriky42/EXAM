/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:15:19 by pabastid          #+#    #+#             */
/*   Updated: 2023/06/28 17:27:54 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s1)
{
	int i = 0;
	while (s1[i])
		i++;
	return (i);
}

void	wdmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (ft_strlen(s1) == i)
	{
		i = 0;
		while (s1[i])
		{
			write (1, &s1[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if(argc == 3)
	{
		wdmatch(argv[1], argv[2]);
	}
	write (1, "\n", 1);
	return (0);
}
