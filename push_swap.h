/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:53:44 by abelarif          #+#    #+#             */
/*   Updated: 2021/08/01 19:05:57 by abelarif         ###   ########.fr       */
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
	int			*sorted;
	int			size;
}	t_stack;

int				ft_isdigit(int c);
int				to_execution(t_stack *a);
int				ft_atoi(const char *str);
int				alpha_checker(char *arg);
int				min_of_stack(t_stack *stack);
int				push_swap(int argc, char *argv[]);
int				allowd_characters_condition(char c);
int				minus_position_condition(char *str, int index);

char			**get_content(char *arg);
char			**ft_split(char const *s, char c);

void			free_stack(t_stack *stack);
void			DONE(t_stack *a, t_stack *b);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			minus_position_checker(char *str);
void			return_two(t_stack *a, t_stack *b);
void			to_sorting(t_stack *a, t_stack *b);
void			check_duplicate_numbers(t_stack *a);
void			big_sorting(t_stack *a, t_stack *b);
void			five_digits(t_stack *a, t_stack *b);
void			three_digits(t_stack *a, t_stack *b);
void			ft_error(char *descriptor, int flag);
void			ft_putendl_fd(char const *s, int fd);
void			first_is_two(t_stack *a, t_stack *b);
void			small_sorting(t_stack *a, t_stack *b);
void			first_is_four(t_stack *a, t_stack *b);
void			first_is_zero(t_stack *a, t_stack *b);
void			first_is_three(t_stack *a, t_stack *b);
void			ft_push(t_stack **src, t_stack **dst, char *stack);
void			ft_swap(t_stack **a, t_stack **b, char *descriptor);
void			reindex_stack(t_stack *stack, t_stack *other_stack);
void			ft_rotate(t_stack **a, t_stack **b, char *descriptor);
void			ft_reverse_rotate(t_stack **a, t_stack **b, char *descriptor);

size_t			ft_strlen(const char *s);

t_stack			*range_checker(char *arg);
t_stack			*to_parsing(int argc, char *argv[]);

#endif
