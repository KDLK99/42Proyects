/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:39:45 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/07 19:34:29 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int main()
{
	printf("%d", ft_isdigit('0'));
	printf("%d", isdigit('0'));
	return (0);
}*/

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
