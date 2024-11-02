/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:49:54 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/31 15:37:40 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}

// int main()
// {
//     char str[] = "abcd";
//     printf("%s\n", ft_strchr(str, 'c'));
//     printf("%s\n", ft_strchr(str, 'g'));
//     printf("%s\n", ft_strchr(str, 0));

//     printf("%s\n", strchr(str, 'c'));
//     printf("%s\n", strchr(str, 'g'));
//     printf("%s\n", strchr(str, 0));
// }