/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_momchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:44:29 by kturken           #+#    #+#             */
/*   Updated: 2022/12/11 15:44:29 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str && i < n)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (0);
}
