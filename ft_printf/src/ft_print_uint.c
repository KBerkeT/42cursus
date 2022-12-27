/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:20:04 by kturken           #+#    #+#             */
/*   Updated: 2022/12/27 12:20:04 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_undigit(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_undigit(n);
	str = (char *) malloc(len + 1);
	str[len] = 0;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--len] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

int ft_print_uint(unsigned int nbr)
{
    char    *str;
    int     len;

    str = ft_uitoa(nbr);
    len = ft_print_str(str);
    free(str);
    return (len);
}