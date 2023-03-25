/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:15:41 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/25 16:36:43 by ivagarci         ###   ########.fr       */
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

	if (s && f)
	{
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
}
