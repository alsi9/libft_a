/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 22:31:35 by ephantom          #+#    #+#             */
/*   Updated: 2021/10/17 20:13:25 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	csrc;
	size_t	cdst;

	i = 0;
	j = 0;
	csrc = ft_strlen(src);
	cdst = ft_strlen(dst);
	if (dstsize <= cdst)
		return (csrc + dstsize);
	while (dst[j])
		j++;
	while (src[i] && j < dstsize - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (csrc + cdst);
}
