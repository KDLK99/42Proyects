/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:58:12 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 16:46:41 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int		ft_atoi(char *str);
void	*memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dest, const void *src, int n);
char	*ft_strchr(char const *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strlcpy(char *dest, char const *src, int n);
int		strncmp(const char *s, const char *t, size_t num);
char	*ft_strnstr(char *big, char *small, int n);
char	*ft_strrchr(char const *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_calloc(size_t nelem, size_t elsize);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_memchr(char *s, int c, int n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_memcpy(void *dest, void *src, size_t n);
void	ft_memset(void *s, int c, size_t n);
char	*ft_strdup(char *src);
unsigned long	ft_strlen(char const *s);

#endif