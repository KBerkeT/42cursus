/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:39:02 by kturken           #+#    #+#             */
/*   Updated: 2022/12/07 15:03:37 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*arr;

	arr = (char *)b;
	i = 0;
	while (i < len)
	{
		arr[i] = c;
		i++;
	}
	return (b);
}

int main()
{
	char cdizi[] = "Bilgisayar";
	ft_memset(cdizi, 'x', 3);
	printf("%s", cdizi);
}
