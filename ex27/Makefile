# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/05 04:51:09 by ymoustai          #+#    #+#              #
#    Updated: 2018/10/05 04:51:28 by ymoustai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
FLAGS = -Wall -Wextra -Werror -o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
