/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:46:31 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/21 17:47:21 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*aux;

	aux = malloc(1 * sizeof(t_list));
	if (!aux)
		return (0);
	aux->content = content;
	aux->next = 0;
	return (aux);
}
