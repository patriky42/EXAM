/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:37:25 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/17 11:54:44 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		write (1, &s1[i], 1);
		i++;
	}
	s1[i] = '\0';
	return (s1[i]);
}

int	main(void)
{
	char dst[] = "hole perra";
	char src[] = "perra fea pero buena";
	ft_strcpy(dst, src);
}
