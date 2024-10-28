/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:03:19 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/27 16:14:01 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    size_t i;

    if(!dst && !src)
        return (dst);
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}

// int main()
// {
//     char src[] = "Hello ";
//     char dst[5] = "";
    
//     printf("%s", ft_memcpy(dst, src, 5));
// }