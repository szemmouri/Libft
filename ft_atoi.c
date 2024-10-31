/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:51:38 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/31 15:33:52 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sing;
	int	result;

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
	return (result * sing);
}

// int main()
// {
//     char str[] = "12235";
//     char str1[] = "-12235";
//     char str2[] = "+12235";
//     char str3[] = "879650433456";

//     printf("%d\n", ft_atoi(str));
//     printf("%d\n", ft_atoi(str1));
//     printf("%d\n", ft_atoi(str2));
//     printf("%d\n", ft_atoi(str3));

// }