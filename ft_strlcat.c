/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:10:54 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/27 19:45:08 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dst_len;
    size_t src_len;
    size_t i;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;
    if(dst_len >= dstsize)
        return (dst_len + src_len);

    while (src[i] && (dst_len + i + 1) < dstsize)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}

// int main()
// {
//     char src[] = "Hello ";
//     char dst[11] = "said";
//     printf("%zu\n", ft_strlcat(dst, src, 11));
//     printf("%s\n", dst);
// }