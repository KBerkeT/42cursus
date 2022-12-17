/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:34:49 by kturken           #+#    #+#             */
/*   Updated: 2022/12/15 16:55:12 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (*lst == NULL)
    {
        lst -> next = new;
        return ;
    }
    new -> next = *lst;
    lst -> next = new;
}