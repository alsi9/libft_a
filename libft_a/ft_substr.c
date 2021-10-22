/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:01:42 by ephantom          #+#    #+#             */
/*   Updated: 2021/10/20 12:32:27 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	j;
	size_t	cs;

	i = start;
	j = 0;
	if (!s)
		return (0);
	cs = ft_strlen(s);
	if (start > cs)
		return (ft_calloc(1, 1));
	if (len > cs)
		len = cs - start;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	while (i < cs && j < len)
		dst[j++] = s[i++];
	dst[j] = '\0';
	return (dst);
}
