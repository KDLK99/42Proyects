/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:55:19 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 16:32:06 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_alloc(size_t nitems, size_t size)
{
	void	*arr;

	arr = malloc(nitems * size);
	if (arr == NULL)
		return (0);
	ft_bzero(arr, nitems * size);
	return (arr);
}
