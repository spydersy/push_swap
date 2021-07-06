/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:57:43 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 09:56:27 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	minus_position_condition(char *str, int index)
{
	if (index != 0 && str[index - 1] == ' ')
		return (1);
	if (index != 0 && str[index - 1] == '-')
		return (1);
	if (index != 0 && ft_isdigit(str[index - 1]))
		return (1);
	if (str[index + 1] == '\0')
		return (1);
	if (str[index + 1] != '\0' && str[index + 1] == ' ')
		return (1);
	return (0);
}

int	allowd_characters_condition(char c)
{
	if (ft_isdigit(c) != 1 && c != ' ' && c != '\t' && c != '-')
		return (1);
	return (0);
}
