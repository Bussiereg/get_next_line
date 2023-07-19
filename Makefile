# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbussier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 10:37:39 by gbussier          #+#    #+#              #
#    Updated: 2023/02/14 10:20:32 by gbussier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line
NAME_bonus = get_next_line_bonus
SRC_c = get_next_line.c get_next_line_utils.c main.c
SRC_bonus = get_next_line_bonus.c get_next_line_utils_bonus.c main_bonus.c

all:
	@cc -Wall -Wextra -Werror -o $(NAME) $(SRC_c)

bonus:
	@cc -Wall -Wextra -Werror -o $(NAME_bonus) $(SRC_bonus)

clean:
	@rm -f $(NAME) 

fclean: clean
