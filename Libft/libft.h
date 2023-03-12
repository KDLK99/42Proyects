/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:55:50 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/11 16:12:18 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

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
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);

#endif