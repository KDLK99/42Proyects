/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:39:35 by kdlk99            #+#    #+#             */
/*   Updated: 2023/05/24 19:47:30 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_contiene_salto(char *s)
{
	int		i;
	char	c;

	i = 0;
	c = '\n';
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return (0);
}

char	*ft_separar(char *src)
{
	char	*cpy;
	int		size;

	size = 0;
	while (src[size] != '\0')
		size++;
	size++;
	cpy = (char *) malloc(size * sizeof(char));
	ft_strlcpy(cpy, src, size);
	return (cpy);
}

int	ft_longitud(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
