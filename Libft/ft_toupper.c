/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:58:05 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 11:58:06 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main()
{
	printf("%c\n", ft_toupper('o'));
	printf("%c", toupper('o'));
}*/

int	ft_toupper(int c)
{
	return (c - 32);
}
