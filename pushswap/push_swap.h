/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:10:15 by pabastid          #+#    #+#             */
/*   Updated: 2023/08/04 10:35:33 by pabastid         ###   ########.fr       */
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
void	swap(t_node **lst, char c);
void	rotate(t_node **lst, char c);
void	rrotate(t_node **lst, char c);
void	push(t_node **src, t_node **dst, char c);
void	check_all(int argc, char **argv);
t_node	*create_list(int argc, char **argv);
t_node	*ft_last(t_node **lst);
int		is_sorted(t_node **lst);
int		is_min(int n, t_node **lst);
int		is_max(int n, t_node **lst);
void	sort_basic(t_node **lst);
int		ft_lstsize(t_node *lst);
int		find_min(t_node **lst);
int		find_max(t_node **lst);
void	min_to_top(t_node **lst, char c);
void	max_to_top(t_node **lst, char c);
void	sort_chunk(t_node **a, t_node **b, int maxchunk);
void	if_three(t_node **lst, char c);
void	if_five(t_node **src, t_node **dst);
void	if_100(t_node **a, t_node **b);
void	if_500(t_node **a, t_node **b);

#endif
