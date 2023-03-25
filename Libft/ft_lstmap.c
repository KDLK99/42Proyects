/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:41:39 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/25 11:45:13 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*ant;
	t_list	*act;
	t_list	*lst2;

	if (lst == 0)
		return (0);
	aux = lst;
	lst2 = malloc(1 * sizeof(t_list));
	if (lst2 == 0)
		return (0);
	act = lst2;
	while (aux != 0)
	{
		act->content = (*f)(aux->content);
		act->next = malloc(1 * sizeof(t_list));
		if (act->next == 0)
			ft_lstclear(&aux, del);
		ant = act;
		act = act->next;
		aux = aux->next;
	}
	ant->next = 0;
	free(act);
	return (lst2);
}

/*#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

void	ft_del(void *content)
{
	free(content);
}

void	ft_print_result(t_list *elem)
{
	int		len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, ((char *)elem->content), len);
	write(1, "\n", 1);
}

int	main ()
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	t_list		*list;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");

	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);
	if (!elem || !elem2 || !elem3 || !elem4)
		return (0);
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	if (!(list = ft_lstmap(elem, &ft_map, &ft_del)))
		return (0);
	if (list == elem)
		write(1, "A new list is not returned\n", 27);
	int i;
	i = 0;
	ft_print_result(list);
	while (list->next)
	{
		list = list->next;
		ft_print_result(list);
		i++;
	}
}*/
