/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:23:12 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/09 19:50:39 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(int nitems, int size)
{
	void	*arr;

	arr = malloc(nitems * size);
	if (arr == NULL)
		return (0);
	ft_bzero(arr, nitems * size);
	return (arr);
}
