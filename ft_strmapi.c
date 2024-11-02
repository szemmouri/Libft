/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:19:26 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/31 15:38:11 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	size_t	len;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = NULL;
	len = ft_strlen(s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

// char add_index(unsigned int i, char c)
// {
//     return (c + i);
// }

// int main()
// {
//     char str[] = "hello";

//     char *result1 = ft_strmapi(str, &add_index);
//     printf("Result 1: %s\n", result1);  // Output: "HeLlO"

//     free(result1);
//     return (0);
// }