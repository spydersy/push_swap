/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:53:44 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/02 09:49:29 by abelarif         ###   ########.fr       */
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

typedef struct  s_stack
{
    int         *stack;
    int         size;
}               t_stack;

t_stack *to_parsing(int argc, char *argv[]);


int     push_swap(int argc, char *argv[]);
int		ft_isdigit(int c);

char    **ft_split(char const *s, char c);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void    ft_error(char *descriptor, int flag);

size_t	ft_strlen(const char *s);



#endif