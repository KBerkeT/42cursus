/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_basic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:08:40 by kturken           #+#    #+#             */
/*   Updated: 2022/12/28 13:13:17 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_chr(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_print_str(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		write (1, &s[i++], 1);
	return (ft_strlen(s));
}

int	ft_print_int(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa(nbr);
	len = ft_print_str(str);
	free(str);
	return (len);
}

int	ft_print_per(void)
{
	write (1, "%", 1);
	return (1);
}