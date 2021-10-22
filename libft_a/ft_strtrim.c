/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:50:27 by ephantom          #+#    #+#             */
/*   Updated: 2021/10/17 13:37:45 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*dst;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen((char *)s1);
	while (j > 0 && ft_strchr(set, s1[j - 1]))
		j--;
	if (j < i)
		len = i;
	else
		len = j - i;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst || !s1)
		return (0);
	j = 0;
	while (s1[i] && j < len)
		dst[j++] = s1[i++];
	dst[j] = '\0';
	return (dst);
}
