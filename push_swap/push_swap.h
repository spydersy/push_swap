/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:53:44 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/02 13:38:40 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

# define KNRM  "\x1B[0m"
# define KRED  "\x1B[31m"
# define KGRN  "\x1B[32m"
# define KYEL  "\x1B[33m"
# define KBLU  "\x1B[34m"
# define KMAG  "\x1B[35m"
# define KCYN  "\x1B[36m"
# define KWHT  "\x1B[37m"

# define	DBG(A)	printf("[%d]\n", A);

typedef struct  s_stack
{
    int         *stack;
    int         size;
}               t_stack;

int		        ft_isdigit(int c);
int             ft_atoi(const char *str);
int             alpha_checker(char *arg);
int             push_swap(int argc, char *argv[]);
int             allowd_characters_condition(char c);
int             minus_position_condition(char *str, int index);

char            **ft_split(char const *s, char c);
char            **get_content(char *arg);

void            free_stack(t_stack *stack);
void	        ft_putchar_fd(char c, int fd);
void	        ft_putstr_fd(char *s, int fd);
void	        minus_position_checker(char *str);
void            ft_error(char *descriptor, int flag);

size_t	        ft_strlen(const char *s);
t_stack         *to_parsing(int argc, char *argv[]);
t_stack         *range_checker(char *arg);



#endif