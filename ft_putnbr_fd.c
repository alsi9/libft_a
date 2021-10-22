/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:22:27 by ephantom          #+#    #+#             */
/*   Updated: 2021/10/16 17:00:38 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write (fd, "-2", 2);
		ft_putnbr_fd(147483648, fd);
	}	
	else if (n < 0)
	{
		write (fd, "-", 1);
		ft_putnbr_fd(-1 * n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		c = n % 10 + 48;
		write (fd, &c, 1);
	}
	else
	{
		c = n + 48;
		write (fd, &c, 1);
	}
}
