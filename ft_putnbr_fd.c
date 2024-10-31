/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:44:07 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/31 18:45:55 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	d;

	if (n == -2147483648)
	{
		write(fd, "-2147483647", 11);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		d = n + '0';
		write(fd, &d, 1);
	}
}
