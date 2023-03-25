/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:24:08 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/21 18:18:01 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*aux;

	aux = lst;
	i = 0;
	while (aux != 0)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}
