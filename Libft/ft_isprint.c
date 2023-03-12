/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:41:36 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/07 19:44:23 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int main()
{
	printf("%d", ft_isprint(127));
	printf("%d", isprint(127));
	return (0);
}*/

int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (1);
	return (0);
}
