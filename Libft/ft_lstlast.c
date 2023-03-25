/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:27:30 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/21 18:24:01 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	if (lst == 0)
		return (0);
	aux = lst;
	while (aux->next != 0)
	{
		aux = aux->next;
	}
	return (aux);
}
