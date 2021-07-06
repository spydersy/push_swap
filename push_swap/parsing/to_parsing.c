/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:19:57 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 07:17:24 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**get_content(char *arg)
{
	char	**content;

	content = ft_split(arg, ' ');
	if (content == NULL)
		ft_error("MALLOC", 1);
	return (content);
}

t_stack *join_stacks(t_stack *tmp, t_stack *a)
{
    int         i;
    int         j;
    t_stack     *stack;

    i = -1;
    j = -1;
    if (a != NULL)
    {
        stack = malloc(sizeof(t_stack) * (1));
        stack->size = tmp->size + a->size;
        stack->stack = malloc(sizeof(int) * stack->size);
        if (stack->stack == NULL)
            ft_error("STACK", 1);
        while (++i < a->size)
            stack->stack[i] = a->stack[i];
        i--;
        while (++j < tmp->size)
            stack->stack[++i] = tmp->stack[j];
    }
    else
    {
        return (tmp);
    }
    free_stack(a);
    free_stack(tmp);
    return (stack);
}

t_stack	*to_parsing(int argc, char *argv[])
{
	int		    i;
    t_stack     *a;
    t_stack     *tmp;

	i = 0;
    a = malloc(sizeof(t_stack) * 1);
    a->size = 0;
    a->stack = malloc(sizeof(int) * 1);
	while (++i < argc)
	{
    	if (ft_strlen(argv[i]) == 0)
	    	ft_error("EMTY ARG", 1);
		if (alpha_checker(argv[i]) == 1)
			ft_error("ARGS MUST BE DIGIT", 1);
		tmp = range_checker(argv[i]);
        a = join_stacks(tmp, a);
	}
	return (a);
}
