# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 09:38:27 by abelarif          #+#    #+#              #
#    Updated: 2021/07/06 09:13:10 by abelarif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap

PUSH_SWAP_SRCS=		main.c\
					push_swap.c\

INSTRUCTIONS_SRCS=	./instructions/ft_swap.c\
					./instructions/ft_push.c\
					./instructions/ft_rotate.c\
					./instructions/ft_reverse_rotate.c\
					# ./instructions/ft_reverse_rotate.c\

PARSING_SRCS=		./parsing/to_parsing.c\

EXECUTION_SRCS=		./execution/to_execution.c\

UTILS_SRCS=			./utils/ft_atoi.c\
					./utils/ft_error.c\
					./utils/checkers.c\
					./utils/ft_split.c\
					./utils/ft_strlen.c\
					./utils/ft_isdigit.c\
					./utils/free_stack.c\
					./utils/conditions.c\
					./utils/ft_putstr_fd.c\
					./utils/ft_putendl_fd.c\
					./utils/ft_putchar_fd.c\

SRCS=			$(UTILS_SRCS)\
				$(PARSING_SRCS)\
				$(PUSH_SWAP_SRCS)\
				$(EXECUTION_SRCS)\
				$(INSTRUCTIONS_SRCS)\

OBJS=			$(SRCS:.c=.o)

FLAGS=			-Wall -Werror -Wextra

$(NAME): $(OBJS)
		clang-9 -g3 $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

fsanitize: fclean $(OBJS)
		clang-9 $(FLAGS) -g3 -fsanitize=address $(SRCS) -o $(NAME)
