/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:10:54 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/31 17:57:55 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	while (src[i] && (dst_len + i) < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main()
// {
//     char dst[100] = "Hello ";
//     char src[] = "Said";
//     printf("%zu\n", ft_strlcat(dst, src, 100));
//     printf("%zu\n", strlcat(dst, src, 100));
//     printf("%s\n", dst);
// }