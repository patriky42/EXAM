/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:10:15 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/29 13:30:06 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"

typedef struct s_node
{
	int			value;
	int			index;
	int			length_list;
	struct s_node	*next;
	struct s_node	*prev;
}t_node;

//functions->operations.c//
void	swap(t_node **lst, char c);
void	rotate(t_node **lst, char c);
void	rrotate(t_node **lst, char c);
void	push(t_node **from, t_node **to);

//functions->check_all.c//
void   ›check_all(int argc, char **argv);

//functions->create_list.c//

#endif
