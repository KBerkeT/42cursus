/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:19:06 by kturken           #+#    #+#             */
/*   Updated: 2022/12/12 15:41:55 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    int i;

    i = 0;
    str = (char *) malloc(len + 1);
    if(str == NULL)
        return (0);
    while (i < len && s)
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = 0;
    return (str);
}