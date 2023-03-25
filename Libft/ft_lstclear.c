/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:33:55 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/21 18:53:14 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*act;
	t_list	*ant;

	act = *lst;
	ant = 0;
	while (act != 0)
	{
		ant = act;
		act = act->next;
		(*del)(ant->content);
		free(ant);
	}
	*lst = 0;
}
