/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:10:15 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/30 16:14:16 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"

typedef struct s_node
{
	int				n;
	int				index;
	int				length_list;
	struct s_node	*next;
	struct s_node	*prev;
}t_node;

//functions->operations.c//
void	swap(t_node **lst, char c);
void	rotate(t_node **lst, char c);
void	rrotate(t_node **lst, char c);
void	push(t_node **src, t_node **dst, char c);

//functions->check_all.c//
void	check_all(int argc, char **argv);

//functions->create_list.c//
t_node	*create_list(int argc, char **argv);
t_node	*ft_last(t_node **lst);

//functions->is_sorted.c//
int		is_sorted(t_node **lst);
int		is_min(int n, t_node **lst);
int		is_max(int n, t_node **lst);

#endif
