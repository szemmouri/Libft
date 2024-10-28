/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:22:18 by szemmour          #+#    #+#             */
/*   Updated: 2024/10/27 17:44:13 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    char *s;
    size_t i;

    d = (char *)dst;
    s = (char *)src;
    i = 0;
    if(!dst && !src)
        return (NULL);
    if (d < s)
    {
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        while (len > 0)
        {
            *(d++) = *(s++);
            len--;
        }
    }
    return dst;
}
