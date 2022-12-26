/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:37:33 by kturken           #+#    #+#             */
/*   Updated: 2022/12/14 13:37:33 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcnt(char const *s, char c)
{
	int	wcnt;
	int	i;

	i = 0;
	wcnt = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			wcnt++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (wcnt);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i;
	size_t	j;
	int		fidx;

	words = (char **) malloc((ft_wordcnt(s, c) + 1) * sizeof(char *));
	if (!words)
		return (0);
	i = 0;
	j = 0;
	fidx = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && fidx < 0)
			fidx = i;
		else if ((s[i] == c || i == ft_strlen(s)) && fidx >= 0)
		{
			words[j++] = ft_substr(s, fidx, i - fidx);
			fidx = -1;
		}
		i++;
	}
	words[j] = 0;
	return (words);
}
