/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:44:14 by kturken           #+#    #+#             */
/*   Updated: 2022/12/14 12:35:06 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT.H
# define LIBFT.H

#include <unistd.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);

void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s1);

int     ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int	c);
int		ft_isascii(int c);
int		ft_isdigit(int	c);
int		ft_isprint(int c);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
int 	ft_tolower(int c);
int 	ft_toupper(int c);

char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *s1, const char *s2, size_t n);

size_t	ft_strlcat(char *dst, const char *srci, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);

char    *ft_substr(char const *s, unsigned int start, size_t len);

#endif