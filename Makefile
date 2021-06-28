# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelarif <abelarif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 09:38:27 by abelarif          #+#    #+#              #
#    Updated: 2021/06/28 18:09:19 by abelarif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap

PUSH_SWAP_SRCS=		main.c\
					push_swap.c\

PARSING_SRCS=	./parsing/args_checker.c\

UTILS_SRCS=		./utils/ft_error.c\
				./utils/ft_isdigit.c\
				./utils/ft_strlen.c\

SRCS=			$(PARSING_SRCS)\
				$(UTILS_SRCS)\
				$(PUSH_SWAP_SRCS)\

OBJS=			$(SRCS:.c=.o)

FLAGS=			-Wall -Werror -Wextra

$(NAME): 
		gcc -g3 $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

fsanitize: fclean $(OBJS)
		gcc $(FLAGS) -g3 -fsanitize=address $(SRCS) -o $(NAME)
