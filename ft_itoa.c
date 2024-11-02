/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:00:48 by szemmour          #+#    #+#             */
/*   Updated: 2024/11/01 19:05:51 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int		len;
	long	num;

	len = 0;
	num = n;
	if (num == 0)
		return (1);
	if (num < 0 && ++len)
		num *= -1;
	while (num > 0 && ++len)
		num /= 10;
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = n;
	len = ft_numlen(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[--len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}

// int main()
// {
//     printf("%s\n", ft_itoa(100));
//     printf("%s\n", ft_itoa(-100));
//     printf("%s\n", ft_itoa(+100));
//     printf("%s\n", ft_itoa(-2147483648));
//     printf("%s\n", ft_itoa(2147483647));
// }