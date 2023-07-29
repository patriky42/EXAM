/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:24:24 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/29 12:47:52 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '-')
		i++;
	if (!num[i])
		return (0);
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_max(char *num)
{
	int	len;

	len = ft_strlen(num);
	if (len > 11)
		return (0);
	if ((len == 11 && num[0] != '-') || (len == 11 && ft_strncmp(num, "-2147483648", 11) > 0) || (len == 10 && ft_strcnmp(num, "2147483647", 10) > 0))
			return (0);
		return (1);
}

int	check_dup(char **argv, int i, int size)
{
	int	j;

	j = i + 1;
	while (j < size)
	{
		if (!strncmp(argv[i], argv[j], 11))
			return (0);
		j++;
	}
	return (1);
}

void	check_all(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!check_int(argv[i]) || !check_max(argv[i]) || !check_dup(argv, i, argc))
		{
			write(2, "Error\n", 6);
			wxit(1);
		}
		i++;
	}
}
