/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:22:44 by kturken           #+#    #+#             */
/*   Updated: 2022/12/19 13:19:24 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	ft_lstiter(lst, f);
	new_lst = ft_lstnew(lst -> content);
	if (!new_lst)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	while (lst -> next != NULL)
	{
		lst = lst -> next;
		ft_lstadd_back(&new_lst, lst);
	}
	return (new_lst);
}
