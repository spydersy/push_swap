/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:11:32 by abelarif          #+#    #+#             */
/*   Updated: 2021/06/28 16:12:52 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
void	print_list(t_list *list);
void 	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
int		ft_lstsize(t_list *lst);

void	del(void *element)
{
	free(element);
	element = NULL;
}

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("[%s]\n", list->content);
		// ft_lstdelone(list, del);
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
	*lst = new;
}

int		ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	int	lst_size;
	int	i;

	i = 0;
	lst_size = ft_lstsize(lst);
	while (i != lst_size - 1)
	{
		i++;
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (lst == NULL)
		tmp = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
}

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
		ft_lstadd_back(&list, new);
	}
	print_list(list);
	printf("len : [%d]\n", ft_lstsize(list));
	t_list *last = ft_lstlast(list);
	printf("last : [%s]\n", last->content);
	print_list(list);
	return (0);
}
