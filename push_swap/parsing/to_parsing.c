/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:19:57 by abelarif          #+#    #+#             */
/*   Updated: 2021/06/30 20:10:11 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int allowd_characters_condition(char c)
{
    if (ft_isdigit(c) != 1 && c != ' ' &&  c != '\t' && c != '-')
        return (1);
    return (0);
}

int alpha_checker(char *arg)
{
    int i;

    i = -1;
    while (arg[++i])
    {
        if (allowd_characters_condition(arg[i]) == 1)
            return (1);
    }
    return (0);
}

t_stack *to_parsing(int argc, char *argv[])
{
    int i;

    i = 0;
    if (ft_strlen(argv[i]) == 0)
        ft_error("EMTY ARG", 1);
    while (++i < argc)
    {
        if (alpha_checker(argv[i]) == 1)
            ft_error("ARGS MUST BE DIGIT", 1);
    
    }
    return (NULL);
}