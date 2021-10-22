/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <ephantom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:22:40 by ephantom          #+#    #+#             */
/*   Updated: 2021/10/22 12:25:19 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
   if (*lst == NULL)
    {
       new->next = NULL;
       *lst = new;
    }
   else
   {
	   new->next = *lst;
	   *lst = new;
   }
}
