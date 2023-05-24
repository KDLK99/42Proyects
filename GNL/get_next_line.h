/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:39:29 by kdlk99            #+#    #+#             */
/*   Updated: 2023/05/24 19:45:40 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

char	*get_next_line(int fd);
char	*ft_contiene_salto(char const *s);
void	ft_separar(char *dest, char *src, int n);
int	ft_longitud(char *s);

#endif
#ifndef BUFFER_SIZE
# define BUFFER_SIZE  1

#endif