/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:21:04 by pabastid          #+#    #+#             */
/*   Updated: 2023/05/23 13:03:07 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_word(char *str)
{
	int 	word = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') || str[i + 1] == ' ' || str[i + 1] == '\t' || str[i] == '\n' || str [i + 1] == '\0')
			word++;
		i++;
	}
	return (word);
}

int	 count_len(char *str, int i)
{
	int len = i;
	while (str[len] != ' ' && str[len] != '\t' && str[len] != '\n' && str[len] != '\0')
		len++;
	return (len - i);
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = count_len (str, i);
	int word = count_word (str);

	char **array = (char **)malloc(sizeof(char *) * (word + 1));

	while (j < word)
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		array[j] = (char *) malloc (sizeof(char) * (len + 1));
		while (j < len)
		{
			array[j][k] = str[i];
			i++;
			k++;
		}
		array[j][k] = '\0';
		j++;
		k = 0;
	}
return (array);
}

int	main(void)
{
	int i = 0;
	char **split = ft_split ("  holaa perra fea");
	while(split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
