/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 22:19:53 by abelarif          #+#    #+#             */
/*   Updated: 2021/04/26 16:54:36 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void    ft_error(char *str)
{
    ft_putstr_fd("ERROR\n", 2);
    ft_putstr_fd(str, 2);
    exit(EXIT_FAILURE);
}

char    **get_content(char *argv[])
{
    int     i;
    char    *str;
    char    **content;
    i = 0;
    if ((str = malloc(sizeof(char) * 2)) == NULL)
        ft_error("MALLOC\n");
    str[0] = ' ';
    str[1] = '\0';
    while (argv[++i])
    {
        if (i == 1)
            str = ft_strjoin(str, argv[1]);
        else
        {
            str = ft_strjoin(str, " ");
            str = ft_strjoin(str, argv[i]);
        }
    }
    i = -1;
    while (str[++i])
        if (str[i] && str[i] == '-' && !ft_isdigit(str[i + 1]))
            ft_error("WRONG CHAR\n");
    content = ft_split(str, ' ');
    free(str);
    return (content);
}

int     get_size(char **content)
{
    int     i;
    int     size;
    int     j;

    size = 0;
    i = -1;
    while (content[++i])
    {
        j = -1;
        while (content[i][++j])
        {
            if((j == 0)
            && !((content[i][j] == '-'
            || ('0' <= content[i][j] && content[i][j] <= '9'))))
                ft_error("NB NOT START BY - OR DIGIT0\n") ;
            else if (j && !('0' <= content[i][j] && content[i][j] <= '9'))
                ft_error("NB NOT START BY - OR DIGIT1\n") ;
        }
        size++;
    }
    return (size);
}

void    print_stack(t_stack a, t_stack b)
{
    printf("****************************************\n");
    printf("size (A) : %d\n", a.size);
    printf("current size (A) : %d\n", a.current_size);
    int i = -1;
    while (++i < a.current_size)
    {
        printf("stack (A): %d\n", a.stack[i]);
    }
    printf("****************************************\n");
    printf("size (B) : %d\n", b.size);
    printf("current size (B) : %d\n", b.current_size);
    i = -1;
    while (++i < b.current_size)
    {
        printf("stack (B): %d\n", b.stack[i]);
    }
    printf("****************************************\n");
}

void    init_stacks(t_stack *a, t_stack *b, int size)
{
    a->size = size;
    a->current_size = size;
    b->size = size;
    b->current_size = 0;

}

int     main(int argc, char *argv[])
{
    char            **content;
    int             size;
    t_stack         a;
    t_stack         b;
    int             i;

    if (argc != 1)
	{
		if ((content = get_content(argv)) == NULL)
            ft_error("GET_CONTENT");
        size = get_size(content);
        printf("SIZE : %d\n", size);
        if (!(a.stack = malloc(sizeof(int) * size)))
            ft_error("MALLOC STACKS\n");
        i = -1;
        while (++i < size)
        {
            a.stack[i] = ft_atoi(content[i]);
            free(content[i]);
	    }
        init_stacks(&a, &b, size);

        free(content);
        free(a.stack);
        // free(b.stack);
    }
    return (0);
}