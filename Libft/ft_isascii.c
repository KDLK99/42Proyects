/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:35:04 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/07 19:41:16 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

int main()
{
	printf("%d", ft_isascii(12));
	printf("%d", isascii(12));
	return (0);
}*/

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	return (0);
}
