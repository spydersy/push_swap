/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 22:19:04 by abelarif          #+#    #+#             */
/*   Updated: 2021/04/25 20:51:35 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include "../libft/libft.h"

typedef struct          s_stack
{
        int             *stack;
        int             size;
        int             current_size;
}                       t_stack;

void    ft_error(char *str);
void    swap(t_stack *a, t_stack *b, int flag);
void    push(t_stack *a, t_stack *b, int flag);
void    rotate(t_stack *a, t_stack *b, int flag, int direction);

#endif