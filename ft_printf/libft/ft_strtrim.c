/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:04:13 by kturken           #+#    #+#             */
/*   Updated: 2022/12/26 12:42:23 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		fidx;
	int		lidx;
	int		i;

	fidx = 0;
	lidx = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, s1[fidx]) && s1[fidx])
		fidx++;
	while (ft_strchr(set, s1[lidx - 1]) && lidx > fidx)
		lidx--;
	str = (char *) malloc(lidx - fidx + 1);
	if (!str)
		return (0);
	i = 0;
	while (fidx < lidx)
		str[i++] = s1[fidx++];
	str[i] = 0;
	return (str);
}
