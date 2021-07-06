/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:55:09 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 05:59:40 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc != 1)
	{
		return (push_swap(argc, argv));
	}
	ft_error("ARGS\n", 1);
	return (-1);
}
