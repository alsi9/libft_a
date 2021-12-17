/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <ephantom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:15:33 by ephantom          #+#    #+#             */
/*   Updated: 2021/10/25 15:26:58 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*po;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		po = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = po;
	}
}
