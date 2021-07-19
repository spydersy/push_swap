/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 09:30:03 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/19 11:22:49 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int     bits_calculator(t_stack *a)
{
    int     max_value;
    int     c;

    c = 0;
    max_value = a->size - 1;
	while (max_value)
	{
        c++;
		max_value >>= 1;
	}
    return (c);
}

int     bin_value(int num, int shift)
{
    int     i;

    i = -1;
    if (num == 0)
        return (0);
    num >>= shift;
	if (num & 1)
		return (1);
	else
        return (0);
    return (0);
}

void    get_bits(t_stack *a, t_stack *b, int shift)
{
    int     i;
    int     c;
    int     original_size;

    c = 0;
    i = -1;
    original_size = a->size + b->size;
    while (++i != a->size && c != original_size)
    {
        if (bin_value(a->stack[i], shift) == 0)
        {
            ft_push(&a, &b, "b");
            c++;
            i = -1;
        }
        else
        {
            ft_rotate(&a, &b, "a");
            c++;
            i--;
        }
        printf("\n*****************************\n");
        print_stack(a, 1);
        printf("DDDDDDDDDDDDDDDDDDDDDDD\n");
        print_stack(b, 1);
        printf("*****************************\n\n");
    }
    i = -1;
    int original_sizeB = b->size;

    while (++i < original_sizeB)
    {
        ft_push(&b, &a, "b");
    }
}

void    big_sorting(t_stack *a, t_stack *b)
{
    int     i;
    int     nb_bits;

    i = -1;
    nb_bits = bits_calculator(a);
    printf("FIRST STACK\n");
    print_stack(a,1);
    printf("-----------------------\n");
    while (++i < nb_bits)
    {
        printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        get_bits(a, b, i);
        printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");
    }
    printf("FINAL STACK\n");
    print_stack(a,1);
    printf("FFFFFFFFFFF\n");
    print_stack(b,1);
    if (A_is_sorted(a, b) == 1)
        printf("SORTED\n");
}
// pb
// pb
// ra
// pb
// ra
// ra
// pb
// pb
// pb
// ra
// pb
// pb
// pb
// pb
// ra
// pb
// pb
// pb
// pb
// pb
// ra
// pb
// ra
// pb
// pb
// pb
// pb
// pb
// pb

// 82 96 23 91 94 59 90 17 68 71 25 62 57 98 97 93 21 58 74 2 88 4 20 37 31 92 11 87 66 22 12 35 80 40 60 49 46 1 15 26 6 65 73 53 84 44 9 76 50 19 69 54 18 61 83 16 30 100 56 29 89 86 43 24 42 41 33 78 10 77 75 7 48 70 32 72 5 55 38 36 99 85 95 51 63 14 52 39 13 64 28 3 79 27 47 45 8 34 67 81