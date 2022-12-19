/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:27:17 by kturken           #+#    #+#             */
/*   Updated: 2022/12/19 14:29:49 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (0);
	str = (char *) malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	i = 0;
	while (s)
		str[i++] = f(i, s[i]);
	str[i] = 0;
	return (str);
}
