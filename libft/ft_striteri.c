/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:05:40 by kturken           #+#    #+#             */
/*   Updated: 2022/12/15 14:38:22 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;
    unsigned int    len;
    
    i = 0;
    len = 0;
    if(s && f)
    {
        len = ft_strlen(s);
        while (i < len)
            (*f)(i++, s++);
    }
}