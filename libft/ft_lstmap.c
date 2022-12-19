/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturken <kturken@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:22:44 by kturken           #+#    #+#             */
/*   Updated: 2022/12/19 15:35:09 by kturken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst -> next != NULL)
	{
		new = ft_lstnew(f(lst -> content));
		if (!new)
			ft_lstclear(&new, del);
		lst = lst -> next;
		ft_lstadd_back(&new_lst, new);
	}
	return (new_lst);
}
