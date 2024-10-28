/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:51:43 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/27 18:07:13 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t i;

    src_len = ft_strlen(src);
    i = 0;
    if (dstsize > src_len + 1)
    {
        while (src[i])
        {
            dst[i] = src[i];
            i++;
        }
    }
    else
    {
        while (i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
    }
    dst[i] = '\0';
    return (src_len);
}

// int main()
// {
//     char src[] = "said";
//     char dst[10] = "Hello ";

//     printf("%zu\n", ft_strlcpy(dst, src, 10));
//     printf("%s\n", dst);
// }