/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:51:38 by szemmour          #+#    #+#             */
/*   Updated: 2024/11/02 17:39:09 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sing;
	unsigned long long	result;

	i = 0;
	sing = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (sing == 1 && result > INT_MAX)
		return (-1);
	if (sing == -1 && result > (unsigned long long)INT_MAX + 1)
		return (0);
	return ((int)result * sing);
}

// int main()
// {
//     char str[] = "12235";
//     char str1[] = "-12235";
//     char str2[] = "+12235";
//     char str3[] = "879650433454567656";
//     char str4[] = "-879650433454567656";

//     printf("%d\n", ft_atoi(str));
//     printf("%d\n", ft_atoi(str1));
//     printf("%d\n", ft_atoi(str2));
//     printf("%d\n", ft_atoi(str3));
//     printf("%d\n", ft_atoi(str4));
// }