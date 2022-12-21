/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:02:54 by kturken           #+#    #+#             */
/*   Updated: 2022/12/19 13:35:47 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    int     i;
	char	*str;

	str = (char *) malloc(ft_strlen(s1) + 1);
    if (!str)
        return (0);
    i = 0;
    while (s1)
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = 0;
	return (str);
}
