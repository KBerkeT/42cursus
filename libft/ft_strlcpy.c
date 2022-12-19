/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:34:20 by kturken           #+#    #+#             */
/*   Updated: 2022/12/19 13:57:42 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (src == NULL)
		return (0);
	while (i < dstsize - 1 || !src)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dstsize);
}
