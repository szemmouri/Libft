/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:55:58 by szemmour          #+#    #+#             */
/*   Updated: 2024/11/01 17:42:23 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i])
			return (0);
		i++;
	}
	return (0);
}

// int main()
// {
//     char s1[15] = "ïïïïï";
//     char s2[100] = "zaia";

//     printf("%d\n", ft_strncmp(s1, s2, 10));
//     printf("%d", strncmp(s1, s2, 10));
// }