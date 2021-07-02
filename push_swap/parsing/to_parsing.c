/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:19:57 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/02 10:45:38 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	allowd_characters_condition(char c)
{
	if (ft_isdigit(c) != 1 && c != ' ' && c != '\t' && c != '-')
		return (1);
	return (0);
}

int	alpha_checker(char *arg)
{
	int	i;

	i = -1;
	while (arg[++i])
	{
		if (allowd_characters_condition(arg[i]) == 1)
			return (1);
	}
	return (0);
}

int	ft_atoll(const char *str)
{
	long long			res;
	int					nav;
	int					sign;

	nav = 0;
	sign = 1;
	res = 0;
	while (str[nav] == 32 || (str[nav] >= 9 && str[nav] <= 13 && str[nav]))
		nav++;
	if (str[nav] == '-')
	{
		sign = -1;
		nav++;
	}
	while (str[nav] >= '0' && str[nav] <= '9')
	{
		if (res < 0 && sign < 0)
			return (0);
		else if (res < 0 && sign > 0)
			return (-1);
		res = res * 10 + str[nav++] - '0';
		if ((res > INT_MAX && sign == 1) || (res - 1 > INT_MAX && sign == -1))
			ft_error("OUT OF RANGE", 1);
	}
	return (res * sign);
}

char	**get_content(char *arg)
{
	char	**content;

	content = ft_split(arg, ' ');
	if (content == NULL)
		ft_error("MALLOC", 1);
	return (content);
}

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

void	minus_position_checker(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '-')
		{
			if (minus_position_condition(str, i) == 1)
				ft_error("(-) : Wrong position", 1);
		}
	}
}

void	range_checker(char *arg)
{
	int			i;
	int			value;
	char		**content;

	i = -1;
	content = get_content(arg);
	while (content[++i])
	{
		minus_position_checker(content[i]);
		value = ft_atoll(content[i]);
	}
}

t_stack	*to_parsing(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (ft_strlen(argv[i]) == 0)
		ft_error("EMTY ARG", 1);
	while (++i < argc)
	{
		if (alpha_checker(argv[i]) == 1)
			ft_error("ARGS MUST BE DIGIT", 1);
		range_checker(argv[i]);
	}
	return (NULL);
}
