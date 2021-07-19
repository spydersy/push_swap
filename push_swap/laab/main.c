/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 07:45:45 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/19 09:54:04 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// 543 = 1000011111

// int     main(int argc, char *argv[])
// {
//     int     i;
//     int     nbr;

//     i = -1;
//     nbr = 543;
//     while (++i < 10)
//     {
//         printf("%d", nbr >>=1 & 1);
//     }
//     return (0);
// }

void	print_bin(int num)
{
    int     c;

    c = 0;
	while (num)
	{
        c++;
		if (num & 1)
			printf("1");
		else
			printf("0");
		printf("(%d)\n", num >>= 1);
	}
	printf("%d\n", c);
}

int     main(int argc, char *argv[])
{
    
    print_bin(atoi(argv[argc - 1]));
    return (0);
}
