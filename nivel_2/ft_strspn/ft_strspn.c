/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:37:38 by pabastid          #+#    #+#             */
/*   Updated: 2023/06/28 18:06:55 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (accept[j] == '\0')
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
		printf("%zu\n", ft_strspn(av[1], av[2]));
		printf("%zu\n", strspn(av[1], av[2]));
	}
	return (0);
}

