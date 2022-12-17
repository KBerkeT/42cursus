/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:35:58 by kturken           #+#    #+#             */
/*   Updated: 2022/12/11 17:35:58 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi (const char *str)
{
    int i;
    int sign;
    int res;

    sign = 1;
    res = 0;
    i = 0;
    while(str[i] == '\f' || str[i] == '\t' || str[i] == ' ' || 
            str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
            i++;
    if (str[i] == '-')
    sign = -1;
    i++;
    while (str)
    {
        if (str[i] > 47 && str[i] < 58)
            res = res * 10 + (str[i] - 48);
        else
            return (res * sign);
        i++;    
    }
    return (res * sign);
}