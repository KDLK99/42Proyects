/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:15:41 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/20 19:21:26 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	ft_striteri(char *s, void (*f)(unsigned int, char*));

int	main()
{

}*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s[i] != '\0' || (s[i] && (*f)))
	{	
		while (s[i] != '\0')
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
