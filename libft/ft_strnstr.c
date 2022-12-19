/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:55:25 by kturken           #+#    #+#             */
/*   Updated: 2022/12/11 16:55:25 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	i = 0;
	if (s2_len == 0 || s1 == s2)
		return ((char *)s1);
	while (s1 && i < n)
	{
		j = 0;
		while (s1[i + j] && s1[j] && s2[j]
			&& s1[i + j] == s2[j] && i + j < n)
			j++;
		if (j == s2_len)
			return ((char *)s1 + i);
		i++;
	}
	return (0);
}
