/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:00:48 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/31 18:44:33 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numlen(int n)
{
	int		len;
	long	num;

	len = 0;
	num = n;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	int		len;

	num = n;
	len = numlen(num);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[--len] = (num % 10 + '0');
		num = num / 10;
	}
	return (str);
}

// int main()
// {
//     printf("%s\n", ft_itoa(100));
//     printf("%s\n", ft_itoa(-100));
//     printf("%s\n", ft_itoa(+100));
//     printf("%s\n", ft_itoa(2008787878));
// }