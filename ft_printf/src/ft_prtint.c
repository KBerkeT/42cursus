/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:36:11 by kturken           #+#    #+#             */
/*   Updated: 2022/12/26 16:14:44 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_prtint(int n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	len = ft_prtstr(str);
	free(str);
	return (len);
}
