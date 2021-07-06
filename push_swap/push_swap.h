/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:53:44 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 16:49:20 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

# define KNRM  "\x1B[0m"
# define KRED  "\x1B[31m"
# define KGRN  "\x1B[32m"
# define KYEL  "\x1B[33m"
# define KBLU  "\x1B[34m"
# define KMAG  "\x1B[35m"
# define KCYN  "\x1B[36m"
# define KWHT  "\x1B[37m"

typedef struct s_stack
{
	int			*stack;
	int			size;
}	t_stack;

int				ft_isdigit(int c);
int				to_execution(t_stack *a);
int				ft_atoi(const char *str);
int				alpha_checker(char *arg);
int				push_swap(int argc, char *argv[]);
int				allowd_characters_condition(char c);
int				minus_position_condition(char *str, int index);

char			**ft_split(char const *s, char c);
char			**get_content(char *arg);

void			free_stack(t_stack *stack);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			minus_position_checker(char *str);
void			check_duplicate_numbers(t_stack *a);
void			ft_error(char *descriptor, int flag);
void			ft_putendl_fd(char const *s, int fd);
void			ft_push(t_stack **src, t_stack **dst, char *stack);
void			ft_swap(t_stack **a, t_stack **b, char *descriptor);
void			ft_rotate(t_stack **a, t_stack **b, char *descriptor);
void			ft_reverse_rotate(t_stack **a, t_stack **b, char *descriptor);

size_t			ft_strlen(const char *s);
t_stack			*to_parsing(int argc, char *argv[]);
t_stack			*range_checker(char *arg);

void			print_stack(t_stack *stack);

#endif
