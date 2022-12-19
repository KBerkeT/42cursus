/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:42:59 by kturken           #+#    #+#             */
/*   Updated: 2022/12/14 18:42:59 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ndigit(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	sign = 0;
	len = ft_ndigit(n);
	str = (char *) malloc(len + 1);
	if (n < 0)
	{
		n *= -1;
	str[sign++] = '-';
	}
	str[len] = 0;
	if (n == 0)
		str[sign] = '0';
	while (n != 0)
	{
		str[--len] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
