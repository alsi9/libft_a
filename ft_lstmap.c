/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <ephantom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:18:45 by ephantom          #+#    #+#             */
/*   Updated: 2021/10/25 15:30:49 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*po;
	t_list	*new_lst;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		po = ft_lstnew(f(lst->content));
		if (po == NULL)
		{
			ft_clear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, po);
		lst = lst->next;
	}
	return (new_lst);
}
