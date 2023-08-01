# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 13:13:45 by pabastid          #+#    #+#              #
#    Updated: 2023/08/01 14:17:29 by pabastid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKE			=	make --no-print-directory
NAME			=	push_swap

MAKEFFILE			=	Makefile

PUSH			=	functions/push_swap.c $(SRCS)
SRCS			=	functions/check_all.c functions/create_list.c functions/operations.c functions/is_sorted.c functions/sort_short.c

OBJS			=	$(PUSH:.c=.o)

Libft_DIR		=	./libft
Libft			=	$(Libft_DIR)/libft.a
Printf_DIR		=	./printf
Printf			=	$(Printf_DIR)/libftprintf.a

RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -I ./

%.o: %.c push_swap.h $(MAKEFILE)
	@$(CC) $(CFLAGS) -c $< -o $@

all:
	@$(MAKE) libs
	@$(MAKE) $(NAME)

libs:
	@$(MAKE) -sC $(Libft_DIR)
	@$(MAKE) -sC $(Printf_DIR)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(Libft) $(Printf) -o $(NAME)

clean:
	@$(MAKE) clean -sC $(Libft_DIR)
	@$(MAKE) clean -sC $(Printf_DIR)
	@$(RM) $(OBJS)
	@echo "Removed all \'.o\' files\n"

fclean:
	@$(MAKE) clean
	@$(RM) $(NAME)
re:
	@$(MAKE) fclean
	@$(MAKE)
	
.PHONY: all clean fclean re
