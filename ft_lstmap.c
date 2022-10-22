/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:14:00 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/22 14:37:00 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_lst;

	new_lst = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, temp);
		lst = lst->next;
	}
	return (new_lst);
}
