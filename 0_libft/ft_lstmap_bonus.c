/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:17:17 by pabtorre          #+#    #+#             */
/*   Updated: 2025/05/19 13:19:09 by pabtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*list;
	t_list		*element;
	t_list		*element_content;

	list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		element_content = (*f)(lst->content);
		element = ft_lstnew(element_content);
		if (!element)
		{
			(*del)(element_content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, element);
		lst = lst->next;
	}
	return (list);
}
