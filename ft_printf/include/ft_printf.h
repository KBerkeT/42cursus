/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:09:38 by kturken           #+#    #+#             */
/*   Updated: 2022/12/26 14:21:15 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int ft_print_chr(int c);
int ft_print_str(const char *s);
int ft_print_per(void);
int ft_print_int(int nbr);
int ft_print_uint(unsigned int nbr);
int	ft_print_hex(unsigned int nbr, const char format);

#endif