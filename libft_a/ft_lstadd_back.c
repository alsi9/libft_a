/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <ephantom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:09:48 by ephantom          #+#    #+#             */
/*   Updated: 2021/10/22 15:23:35 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)

{
    if (!new && !lst)
        return ;
    if (*lst == NULL)
        *lst = new;
        return ;
    while (lst->next)
        lst = lst->next;
    lst->next = *new;
}
