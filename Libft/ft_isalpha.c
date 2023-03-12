/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:39:10 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/07 19:34:20 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int main()
{
	printf("%d", ft_isalpha(20));
	printf("%d", isalpha(20));
	return (0);
}*/

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
