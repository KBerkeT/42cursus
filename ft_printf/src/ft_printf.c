/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:11:27 by kturken           #+#    #+#             */
/*   Updated: 2022/12/26 14:20:26 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_print_chr(va_arg(args, int));
	else if (format == 's')
		len = ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		len = ft_print_ptr(va_arg(args, void *));
	else if (format == 'd' ||format == 'i')
		len = ft_print_int(va_arg(args, int));
	else if (format == 'u')
		len = ft_print_uint(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len = ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len = ft_print_per();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			len += ft_print_chr(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
