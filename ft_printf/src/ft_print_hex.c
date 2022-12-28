/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:01:38 by kturken           #+#    #+#             */
/*   Updated: 2022/12/28 13:13:36 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_ndigit_hex(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		ft_print_hex(nbr / 16, format);
		ft_print_hex(nbr % 16, format);
	}
	else
	{
		if (nbr < 10)
			ft_putchar_fd((nbr + 48), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd ((nbr - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd ((nbr - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int nbr, const char format)
{
	if (nbr == 0)
		return (ft_print_chr('0'));
	ft_put_hex(nbr, format);
	return (ft_ndigit_hex(nbr));
}