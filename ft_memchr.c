/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:13:51 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/31 15:35:53 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cc;

	i = 0;
	str = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char str[] = "said";
//     printf("%s", ft_memchr(str, 'a', 100));
// }