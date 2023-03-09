/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:52:12 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/09 18:13:06 by kdlk99           ###   ########.fr       */
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
