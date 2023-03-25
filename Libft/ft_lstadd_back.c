/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:30:14 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/21 18:47:07 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst != 0)
	{	
		aux = *lst;
		while (aux->next != 0)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	else
		*lst = new;
}
