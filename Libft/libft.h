/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:55:50 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/09 21:06:40 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(char *str);
char	*ft_memchr(char *s, int c, int n);
int		ft_memcmp(char *s1, char *s2, int n);
void	*ft_memmove(char *dest, char *src, int n);
char	*ft_strchr(char *s, int c);
int		ft_strlcat(char *dest, char *src, int n);
int		ft_strlcpy(char *dest, char const *src, int n);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_strnstr(char *big, char *small, int n);
char	*ft_strrchr(char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_calloc(int nitems, int size);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif