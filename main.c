/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:11:32 by abelarif          #+#    #+#             */
/*   Updated: 2021/06/28 14:31:11 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_lstnew(void *content);
void	print_list(t_list *list);
void ft_lstadd_front(t_list **lst, t_list *new);

int	main(int argc, char *argv[])
{
	t_list	*list;
	int		i;

	i = 0;
	list = ft_lstnew(argv[0]);
	while (++i < argc)
	{
		t_list *new;

		new = malloc(sizeof(t_list));
		if (new == NULL)
			return (0);
		new->content = argv[i];
		new->next = NULL;
		ft_lstadd_front(&list, new);
	}
	print_list(list);
	return (0);
}

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("[%s]\n", list->content);
		list = list->next;
	}
}

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->next = NULL;
	list->content = malloc(sizeof(content) * 1);
	if (list->content == NULL)
		return (NULL);
	list->content = content;
	return (list);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *tmp_list;

	tmp_list = *lst;
	new->next = tmp_list;
	*lst = new	;
}
