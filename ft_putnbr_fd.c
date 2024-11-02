/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:44:07 by szemmour          #+#    #+#             */
/*   Updated: 2024/11/02 11:03:40 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	d;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
		ft_putnbr_fd(n, fd);
		return ;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
		return ;
	}
	d = n + '0';
	write(fd, &d, 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd(0, 2);
// 	printf("\n");
// 	ft_putnbr_fd(5, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-5, 2);
// 	printf("\n");
// 	ft_putnbr_fd(42, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-57, 2);
// 	printf("\n");
// 	ft_putnbr_fd(164189, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-987441, 2);
// 	printf("\n");
// 	ft_putnbr_fd(2147483647, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-2147483648LL, 2);
// }