# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 09:38:27 by abelarif          #+#    #+#              #
#    Updated: 2021/06/30 19:52:08 by abelarif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap

PUSH_SWAP_SRCS=		main.c\
					push_swap.c\

PARSING_SRCS=	./parsing/to_parsing.c\
				# ./parsing/cmd_checker.c\
				# ./parsing/file_checker.c\

# EXECUTION_SRCS=	./execution/to_execution.c\

UTILS_SRCS=		./utils/ft_error.c\
				./utils/ft_putstr_fd.c\
				./utils/ft_putchar_fd.c\
				./utils/ft_strlen.c\
				./utils/ft_isdigit.c\

SRCS=			$(UTILS_SRCS)\
				$(PUSH_SWAP_SRCS)\
			$(PARSING_SRCS)\

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
