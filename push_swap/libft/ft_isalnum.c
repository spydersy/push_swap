/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:54:10 by abelarif          #+#    #+#             */
/*   Updated: 2020/08/17 08:04:46 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 57 && c >= 48))
		return (1);
	else if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
