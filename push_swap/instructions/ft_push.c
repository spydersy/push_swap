/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:59:07 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/19 11:36:03 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_push(t_stack *src)
{
	if (src->size == 0)
	{
		ft_error("PUSH : EMPTY STACK", 0);
		return (0);
	}
	return (1);
}

void	ft_push(t_stack **src, t_stack **dst, char *stack)
{
	int		*stack_src;
	int		*stack_dst;
	int		i;

	i = 0;
	if (check_push(*src) == 0)
		return ;
	stack_dst = malloc(sizeof(int) * ((*dst)->size + 1));
	stack_src = malloc(sizeof(int) * ((*src)->size - 1));
	if (stack_dst == NULL || stack_src == NULL)
		ft_error("MALLOC", 1);
	while (++i < (*src)->size)
		stack_src[i - 1] = (*src)->stack[i];
	stack_dst[0] = (*src)->stack[0];
	i = 0;
	while (++i < (*dst)->size + 1)
		stack_dst[i] = (*dst)->stack[i - 1];
	free((*dst)->stack);
	free((*src)->stack);
	(*dst)->stack = stack_dst;
	(*src)->stack = stack_src;
	(*dst)->size++;
	(*src)->size--;
	ft_putchar_fd('p', 1);
	ft_putendl_fd(stack, 1);
}

void    print_bin0(int nbr)
{
    if (nbr == 0)
        printf("0");
	while (nbr)
	{
		if (nbr & 1)
            printf("1");
		else
            printf("0");
		nbr >>= 1;
	}
}

void	print_stack(t_stack *stack, int flag)
{
	int		i;

	i = -1;
	while (++i < stack->size)
	{
        if (flag == 2)
		    printf("SORTED ELEMENT[%d] : [%d]\n", i, stack->sorted[i]);
	    if (flag == 1)
		    printf(" STACK ELEMENT[%d] : [%d]\n", i, stack->stack[i]);
    	if (flag == 3)
		    printf(" STACK [%d] : [%5d] | [%5d]\n", i, stack->stack[i], stack->sorted[i]);
        if (flag == 4)
        {            
		    printf("SORTED ELEMENT[%d] : [%d],[", i, stack->stack[i]);
            print_bin0(stack->stack[i]);
            printf("]\n");
        }
    }
}
