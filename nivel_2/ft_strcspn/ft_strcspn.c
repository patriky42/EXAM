/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:55:12 by pabastid          #+#    #+#             */
/*   Updated: 2023/06/28 18:06:23 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		while (reject[j])
		{
			if (s[i] == reject[j])
				break;
			j++;
		}
		if (reject[j] != '\0')
			return (i);
		i++;
		j = 0;
	}
	return (i);
}

int main (int ac, char **av)
{
	if (ac == 3)
	{
		printf("%zu\n", ft_strcspn(av[1], av[2]));
		printf("%zu\n", strcspn(av[1], av[2]));
	}
	return (0);
}
