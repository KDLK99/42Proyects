/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:44:14 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/07 19:34:27 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);

int main()
{
	printf("%d", ft_isalnum('~'));
	printf("%d", isalnum('~'));
	return (0);
}*/

int	ft_isalnum(int c)
{
	if ((c <= '9' && c >= '0') || (c <= 'z' && c >= 'a')
		|| (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	return (0);
}
